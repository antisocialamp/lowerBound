#include <cstdio>
#include <cstdlib>
#include <cstring>

int rowsArray[8], cases, reqRow, reqColumn, lineCounter;

// bool function place:
// given the row and column of a queen position check whether is is feasible or not
bool place ( int row, int column )
{
	for ( int prev = 0; prev < column; prev++ )
		if ( rowsArray[prev] == row || abs(rowsArray[prev] - row ) == abs(prev - column) )
			return false;
	return true;
}

void backtrack ( int column )
{
	// If we are past the last column, and the input requirement is met:
	// continue with the output sequence
	if ( column == 8 && rowsArray[reqColumn] == reqRow )
	{
		// Print solution number, and queense location at row 0 (0-indexed)
		printf ("%2d      %d", ++lineCounter, rowsArray[0]+1);
		// Now from rows 1 to 7 (0-indexed) print the row of the queen
		for ( int j = 1; j < 8; j++ )
			printf(" %d", rowsArray[j] + 1);
		printf("\n");
	}

	// Check the rows that the queen can possible be placed at
	for ( int row = 0; row < 8; row++ )
		if ( place(row,column) )
		{
			rowsArray[column] = row;
			backtrack(column+1);
		}
}

int main()
{
	scanf("%d",&cases);
	while ( cases-- )
	{
		scanf("%d %d",&reqRow,&reqColumn);
		// 0-indexed
		reqRow--; reqColumn--;

		memset( rowsArray, 0, sizeof(rowsArray) );
		lineCounter = 0;
		printf("SOLN       COLUMN\n");
		printf(" #      1 2 3 4 5 6 7 8\n\n");
		backtrack(0);
		if ( cases )
			printf("\n");
	}
}

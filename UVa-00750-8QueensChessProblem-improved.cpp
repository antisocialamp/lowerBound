#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <bitset>

std :: bitset<15> rowFlag, ld, rd;
int rowsArray[8], cases, reqRow, reqColumn, lineCounter;


void backtrack ( int column )
{
	if ( column == 8 && rowsArray[reqColumn] == reqRow )
	{
		printf ("%2d      %d", ++lineCounter, rowsArray[0]+1);
		for ( int j = 1; j < 8; j++ )
			printf(" %d", rowsArray[j] + 1);
		printf("\n");
	}

	for ( int row = 0; row < 8; row++ )
		if ( rowFlag[row] && ld[row-column+7] && rd[row+column] )
		{
			rowFlag[row] = ld[row-column+7] = rd[row+column] = false;
			rowsArray[column] = row;
			backtrack(column+1);
			rowFlag[row] = ld[row-column+7] = rd[row+column] = true;
		}
}

int main()
{
	scanf("%d",&cases);
	while ( cases-- )
	{
		scanf("%d %d",&reqRow,&reqColumn);
		reqRow--; reqColumn--;


		rowFlag |= ld |= rd |= (1 << 16) -1;
		memset( rowsArray, 0, sizeof(rowsArray) );
		lineCounter = 0;
		printf("SOLN       COLUMN\n");
		printf(" #      1 2 3 4 5 6 7 8\n\n");
		backtrack(0);
		if ( cases )
			printf("\n");
	}
}

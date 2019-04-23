#include <cstdio>
#include <bitset>

using namespace std;

// Variables:
// bitsets are used as bool flags for rows, left and right diagonals
// maxSum is the final answer, tempSum a temporary (possibly permanent) answer 
bitset<15> row, ld, rd;
int maxSum, tempSum, cases,
    answerArr[8], inputArr[8][8];



void backtracking (int c)
{
	if ( c == 8 )
	{
		tempSum = 0;
		for ( int l = 0; l < 8; l++ )
			tempSum += inputArr[l][answerArr[l]];
		if ( tempSum > maxSum )
			maxSum = tempSum;
	}
	for ( int r = 0; r < 8; r++ )
	{
		if ( row[r] && ld[r-c+7] && rd[r+c] )
		{
			row[r] = ld[r-c+7] = rd[r+c] = 0;
			answerArr[c] = r;
			backtracking(c+1);
			row[r] = ld[r-c+7] = rd[r+c] = 1;
		}
	}
}

int main()
{
	scanf("%d",&cases);
	while ( cases-- )
	{
		maxSum = 0;
		row |= ld |= rd |= ( 1 << 16 ) - 1;
		for ( int l = 0; l < 8; l++ )
			scanf("%d %d %d %d %d %d %d %d", &inputArr[l][0],  &inputArr[l][1],  &inputArr[l][2],  &inputArr[l][3],  &inputArr[l][4],  &inputArr[l][5],  &inputArr[l][6],  &inputArr[l][7]);  
		backtracking(0);
		printf("%5d\n", maxSum);
	}
}


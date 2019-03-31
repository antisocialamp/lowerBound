#include <cstdio>

int main ()
{
	int primeNumbers[25] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
	int N, tempPointer, tempResult,result;

	while ( scanf("%d",&N), N)
	{
		result = 0;
		tempPointer = 0;
		tempResult = 1;
		while ( N != 1 )
		{
			if ( N % primeNumbers[tempPointer] == 0 )
			{
				N /= primeNumbers[tempPointer];
				tempResult *= primeNumbers[tempPointer];
			}
			else
			{
				if ( tempResult > 1 )
					result += tempResult;
				tempResult = 0;
				tempPointer++;
			}
		}

		if ( result % 2 == 1 )
			puts("yes");
		else
			puts("no");
	}
}

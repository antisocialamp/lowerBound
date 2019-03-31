#include <cstdio>

int main ()
{
	int N, tempScore, turn;

	while ( scanf("%d",&N) != EOF )
	{
		tempScore = 1;
	        turn = 0;

		while ( tempScore < N )
		{
			turn += 1;
			if ( 9 * tempScore >= N )
				break;
			if ( 18 * tempScore >= N )
			{
				turn++;
				break;
			}
			for ( int l = 9; l > 1; l-- )
				if ( (l * 9 * tempScore) < N )
				{
					tempScore *= l;
					break;
				}
		}
		if ( turn % 2 == 0 )
			puts("Ollie wins.");
		else
			puts("Stan wins.");
	}
}

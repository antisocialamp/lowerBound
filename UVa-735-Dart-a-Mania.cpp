#include <cstdio>
#include <vector>
#include <cstring>
#include <set>

using namespace std;

set<int> scores;
set<int>:: iterator l,k,d;
bool valid[65][65][65];
int tempInt,combinations, permutations;

int main()
{
	// Setting up the scores array
	scores.insert(0);
	scores.insert(50);
	for ( int l = 1; l < 21; l++ )
		scores.insert(l), scores.insert(l*2), scores.insert(l*3);

	int N;
	while ( scanf("%d",&N), N > 0 )
	{
		memset(valid,true,274625);
		permutations = 0,combinations = 0;

		for ( l = scores.begin(); l != scores.end(); l++)
			for ( k = scores.begin(); k != scores.end(); k++ )
			{
				d = scores.find(N-*l-*k);
				if ( d != scores.end() )
				{
					permutations++;
					if ( valid[*l][*k][*d] )
					{
						valid[*l][*k][*d] = false;
						valid[*l][*d][*k] = false;
						valid[*k][*d][*l] = false;
						valid[*k][*l][*d] = false;
						valid[*d][*k][*l] = false;
						valid[*d][*l][*k] = false;
						combinations++;
					}
				}
			}


		//OUTPUT SEQUENCE:
		if ( permutations && combinations )
		{
			printf("NUMBER OF COMBINATIONS THAT SCORES %d IS %d.\n", N, combinations);
			printf("NUMBER OF PERMUTATIONS THAT SCORES %d IS %d.\n", N, permutations);
		}
		else
			printf("THE SCORE OF %d CANNOT BE MADE WITH THREE DARTS.\n",N);

		printf("%s\n","**********************************************************************");
	}
	printf("%s\n","END OF OUTPUT");
}

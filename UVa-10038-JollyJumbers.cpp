#include <bitset> 		//bitset
#include <cstdio> 		//printf scanf
#include <cmath>		//abs

using namespace std;

bitset<3000> boolFlag(0);
int inputArray[3000];

int main () 
{	
	int N, tempInt;
	bool jolly;

	while ( scanf("%d",&N) != EOF )
	{
		jolly = true;
		boolFlag.reset();


		// Reading input:
		for ( int l = 0; l < N; l++ )
			scanf ("%d", &inputArray[l] );
		
		// Flaging values passed:
		for ( int i = 1; i < N; i++ )
		{
			tempInt = abs(inputArray[i-1]-inputArray[i]);
			if ( tempInt > (N -1) || tempInt == 0 )
			{	
				jolly = false;
				break;
			}
			boolFlag [tempInt] = true;
		}
		
		// Checking if the requirements are met:
		if ( jolly && boolFlag.count() == N-1 )
			printf ("Jolly\n");
		else
			printf("Not jolly\n");
	}
}

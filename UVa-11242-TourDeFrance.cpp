#include <cstdio>		//printf scanf
#include <algorithm>		//sort, max

using namespace std;

int main ()
{
	// Integer f: Number of sprockets in the front cluster
	// Integer r: Number of sprockets in the rear cluster
	int f,r;
	int fa[10];
	// Double spread: aka result: the number finally printed
	double spread, tempR,
	       ratios[100];

	while ( scanf("%d %d",&f,&r), f)
	{
		spread = 0;
		for ( int l = 0; l < f; l++ )
			scanf ("%d", &fa[l]);
		// Now we have already read the front cluster input, there is no need for
		// us to make additional loops when we can solve ( at least partly ) the problem
		// in the second one. ( less code -> less bugs to fix )
		for ( int rReps = 0; rReps < r; rReps++ ) 
		{
			scanf("%lf", &tempR);
			for ( int fReps = 0; fReps < f; fReps++ )
				ratios[f*rReps+fReps] = tempR / fa[fReps];
		}

		sort ( ratios, ratios + (f*r) );
		
		for ( int l = 1; l < f * r; l++ )
			spread = max(spread, ratios[l]/ratios[l-1]);

		printf ("%.2lf\n", spread );
	}
}



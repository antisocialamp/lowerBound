#include <cstdio>

int main()
{
	int n, h[50], sum, avg, res, sets=0;
	while ( scanf("%d",&n), n )
	{
		sum = 0;
		res = 0;

		for ( int i = 0; i < n; i++ )
		{
			scanf("%d", &h[i] );
			sum += h[i];
		}

		avg = sum/n;

		for ( int i = 0; i < n; i++ )
			if ( h[i] < avg )
				res += avg - h[i];

	printf("Set #%d\n", ++sets);
	printf("The minimum number of moves is %d.\n\n", res);	
	}
}



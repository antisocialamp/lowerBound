#include <cstdio> 		//printf scanf

int main ()
{
	// Integer k: size of the array (input)
	// Integer nL: integer used to print a new line
	int k, nL = 0, lotto[12];

	while ( scanf("%d",&k), k)
	{
		if ( nL++ )
			printf ("\n" );

		for ( int l = 0; l < k; l++ )
			scanf ("%d", &lotto[l]);

		for ( int a = 0; a < k-5; a++ )
			for ( int b = a+1; b < k-4; b++ )
				for ( int c = b+1; c < k-3; c++ )
					for ( int d = c+1; d < k-2; d++	)
						for ( int e = d+1; e < k-1; e++ )
							for ( int f = e+1; f < k; f++ )
								printf ("%d %d %d %d %d %d\n",
										lotto[a], lotto[b], lotto[c],
										lotto[d], lotto[e], lotto[f] );	

	}
	return 0;
}

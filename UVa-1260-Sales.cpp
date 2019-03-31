#include <cstdio> 	// printf scanf 

int main () 
{
	// Integer T: number of test cases
	// Integer N: size of array (input) for every test case
	// Integer result: each test cases result
	int T, n, result;

	scanf ("%d", &T);
	while ( T-- )
	{

		scanf ("%d", &n);
		
		// Integer array a: input
		int a[n];
		result = 0; 	// simply resetting the variable

		for ( int l = 0; l < n; l++ )
		{
			scanf ("%d", &a[l]);
			for ( int k = 0; k < l; k++ )
				if ( a[l] >= a[k] )
					result++;
		}
		printf ("%d\n", result );
	}
}

// Problem: U-Va 10976 - Fractions Again?!

#include <cstdio>
#include <bitset>

using std :: bitset;

int main () 
{
	// Bitset will be used to save time in the second loop
	bitset < 10001 > isTrue;
	int n,
	    count;

	while ( scanf("%d", &n) == 1 )
	{
		 //reseting the variables:
		 count = 0;
		 isTrue.reset();

		 for ( int l = n + 1; l <= 2*n; l++ )
		 { 	
			if ( (l*n)%(l-n) == 0 ) 
			{
				isTrue[l-n] = 1;
				count++;
			}
		 }
		printf ("%d\n", count);

		 for ( int l = 1; l <=n; l++ )
			 if ( isTrue[l] )
				 printf ("1/%d = 1/%d + 1/%d\n", n, ((n+l)*n)/(l) , n+l );
	}
}

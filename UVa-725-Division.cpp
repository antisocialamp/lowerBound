#include <cstdio>

int main ()
{
	int divident, divisor, n, okFlag, loopLimit, temp, newLine = 0;
	bool notSolvable;
	while ( scanf("%d",&n), n )
	{
		// divident / divisor = sum <=> (max)divident / (max)divisor = sum <=>
		// (max)divisor = (max)divident / sum, where (max)divident = 98765
		loopLimit = 98765 / n;

		if ( newLine++ )
			puts("");

		notSolvable = true;

		for ( int divisor = 1234; divisor <= loopLimit; divisor++ )
		{
			okFlag = 0;
			divident = n * divisor;
		       // To avoid furhter examination due to integer division
		       if ( divident / divisor == n )
		       {
			       okFlag = ( divisor < 10000 ); 		// *is first digit 0?*
			       temp = divident;
			       while ( temp ){ okFlag |= 1 << ( temp%10 ); temp /= 10; }
			       temp = divisor;
			       while ( temp ){ okFlag |= 1 << ( temp%10 ); temp /= 10; }
			       if ( okFlag == 1023 )
			       {
			       	       notSolvable = false;
				       printf("%.5d / %.5d = %d\n", divident, divisor, n );
			       }
		       }
		}
		if ( notSolvable )
			printf("There are no solutions for %d.\n", n);
	}
}



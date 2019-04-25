#include <cstdio>

int main ()
{
	bool no;
	int cases, target, bars, sum, bar[20];
	long permCounter;

	scanf("%d",&cases);
	while ( cases-- )
	{
		scanf("%d %d", &target, &bars);
		no = true;
		
		for ( int l = 0; l < bars; l++ )
			scanf("%d", &bar[l]);

		for ( permCounter = 0; permCounter < (1<<bars); permCounter++)
		{
			sum = 0;
			for ( int l = 0; l < bars; l++ )
				if ( permCounter & ( 1 << l ) )
					sum += bar[l];
			if ( sum == target )
			{
				no = false;
				puts("YES");
				break;
			}
		}
		if ( no )
			puts("NO");
	}
}

		

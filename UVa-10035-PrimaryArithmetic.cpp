#include <cstdio>

int main()
{
	int firstInt,secondInt,c, total;
	while ( scanf("%d %d",&firstInt,&secondInt), firstInt || secondInt )
	{
		total = c = 0;
		while ( firstInt || secondInt )
		{
			if ( firstInt % 10 + secondInt % 10 + c > 9 )					{
				total++;
				c = (firstInt%10+secondInt%10+c)/10;
			}	
			else
				c = 0;
			firstInt /= 10;
			secondInt /= 10;
		}
		if ( total == 1 )
			puts("1 carry operation.");
		else if ( total )
			printf("%d carry operations.\n", total);
		else
			puts("No carry operation.");
	}
}


#include <cstdio>

int main()
{
	int t,a,b;
	int sum, cases;

	scanf("%d", &t);
	cases = 0;
	while ( t-- )
	{
		scanf("%d %d",&a,&b);
		sum = 0;
		if ( a % 2 == 0 )
			a++;
		
		while ( a <= b )
		{
			sum += a;
			a += 2;
		}

		printf("Case %d: %d\n", ++cases, sum);
	}
}
			


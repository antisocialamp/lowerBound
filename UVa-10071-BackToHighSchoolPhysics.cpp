#include <cstdio>

int main()
{
	int v, t, x;
	while ( scanf("%d %d",&v, &t) != EOF )
	{
		x = 2 * t * v;
		printf("%d\n", x);
	}
}

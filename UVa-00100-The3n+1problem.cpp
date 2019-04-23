#include <cstdio>
#include <algorithm>

using namespace std;

int memoization[1000000]={};

int solve ( int x )
{
	if ( x = 1 )
		return 1;
	if ( memoization[x] != 0 )
		return memoization[x];
	if ( x % 2 == 0)
		memoization[x] = 1 + solve(x/2);
	else
		memoization[x] = 1 + solve(3*x+1);

	return memoization[x];
}
int main()
{
	int startingPoint, lastPoint;
	int result;

	while ( scanf("%d %d", &startingPoint, &lastPoint) == 2 )
	{
		result = 0;
		//for ( int l = startingPoint; l <= lastPoint; l++ )
			result = max(result, solve(startingPoint));

		printf ("%d %d %d\n", startingPoint, lastPoint, result);
	}
}

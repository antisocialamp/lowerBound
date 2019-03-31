#include <cstdio>

int main ()
{
	int N, result;

	while ( scanf("%d", &N) != EOF )
	{
		result = 0;
		result |= (( N & (127) ) << 24 );
		result |= (( N & (127 << 8)) << 8 );
		result |= (( N & (127 << 16)) >> 8 );
		result |= (( N & (127 << 24)) >> 24);
		printf ("%d converts to %d\n", N, result);
	}
}


#include <cstdio>

int main(){
	// Int N is the number of comparisons i have to make
	int N;
	scanf ("%d", &N);

	// Integers a and b are those I am gonna compare
	int a,b;
	int c = 1;
	for ( int l = 0; l < N; l++ ) {
		scanf ("%d %d", &a, &b);
		if ( a == b)
			printf ( "%s\n", "=" );
		else
			if ( a > b )
				printf ( "%s\n", ">");
			else
				printf ( "%s\n", "<");

	}

	return 0;
}	
				

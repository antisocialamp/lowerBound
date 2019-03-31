#include <cstdio>

int main(){
       	// INPUT PROCESS HAS BEEN MODIFIED DUE TO MULTIPLY CASES IN ONE INPUT	
	// integer K is the number of queries
	// integers N, M are the coordinates (x,y) of point A (The division point)
	int K, N, M;

	// integers a and b stand for the coordinates of point X whose location we must determine
	int a,b;

	while ( scanf ("%d %d %d", &K, &N, &M) != EOF ){
		for ( int l = 0; l < K; l++){
			scanf ( "%d %d", &a, &b);
			if ( a == N || b == M) 
				printf ( "divisa\n" );
			else if ( a < N ) {
				if ( b > M ) printf ( "NO\n" );
				else printf ("SO\n");
			}
			else {
				if ( b > M ) printf ( "NE\n" );
				else printf ( "SE\n" );
			}
		}
	}
}

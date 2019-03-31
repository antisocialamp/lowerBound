// Problem UVa ID: 11933
#include <cstdio>

#define isOn(S, j) (S & ( 1 << j ))

int leastSB ( int toCheck ){
	int result = 0;
	bool notFound = true ;

	while (notFound){
		if ( isOn (toCheck, result) ){ 
			notFound = false;
			break;
		}
		result++;
	}
	return result;
}

int main (){
	// Problem description: Given an integer N split it
	int N;
	// Assign value passed by the user
	scanf("%d",&N);
	
	// Those are the two (derivative) integers from N. Values will be assigned using 
	int oddBits,evenBits;

	// The input will contain more than one test case:
	while ( N != 0 ){
		// Resetting the output vars' value
		oddBits = 0;
		evenBits = 0; 
		
		// Purely useless var to check whether d is odd or even
		int count = 0;

		for (int d = leastSB(N); d < 32; d++){
			if ( isOn(N,d) ){
				if ( count % 2 == 0 )
					oddBits |= ( 1 << d );
				else
					evenBits |= ( 1 << d );
				count ++;
			}
		}
		printf ("%d %d\n", oddBits, evenBits);
		scanf ("%d", &N);
	}
}

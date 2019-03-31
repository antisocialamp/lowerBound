#include <cstdio> 		//printf scanf
#define rep(i,b,c) for ( int i = b; i < c; i++ )
using namespace std;


int main () 
{	
	// Integer N: Number of cars taking place
	// Integer C: Car Number
	// Integer P: Car Position ( when compared to starting position
	// Integer position: secondary variable to help us easily deal with the problem
	int myArray[1000];
	int N,C,P,position;
	bool possible;

	while ( scanf("%d", &N) != EOF && N)
	{
		rep(l,0,N)
			myArray[l] = -11;	
		possible = true;

		rep(l,0,N)
		{
			scanf("%d %d",&C,&P);
			position = l + P;
			if ( position < 0 || position >= N || myArray[position] != -11 )
			{
				possible = false;
				break;
			}
			myArray[position] = C;
		}
		
		if ( possible )
		{
			rep(l,0,N)
			{ 	
				if ( l > 0 ) printf(" ");
				printf("%d", myArray[l]);
			}
			puts("");
		}
		else 
			puts ("-1");
	}
}





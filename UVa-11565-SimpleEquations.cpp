#include <cstdio> 


int main ()
{
	int cases,A,B,C,x,y,z;
	bool answer;
	scanf("%d",&cases);

	while ( cases-- )
	{
		scanf("%d %d %d", &A,&B,&C);
		answer = true;	
		for ( x = -100; x < 101 && answer; x++ ) if (x*x<=C)
			for ( y = -100; y < 101 && answer; y++ )
			if ( x != y && (x*x+y*y<C) )
				for ( z = -100; z < 101; z++ )
					if ( x!=z && y!=z &&
					      	(x+y+z == A) &&
						(x*y*z == B) &&
						(x*x+y*y+z*z == C) )
					{
						answer = false;
						printf("%d %d %d\n",x,y,z);
						break;
					}
		if ( answer )
			puts("No solution.");
	}
}


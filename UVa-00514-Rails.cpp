#include <cstdio>
#include <stack>

#define repl(i,b) for ( int l = i; i < b; l++ )

using std :: stack;

stack<int> s;
int train[1000];

int main () 
{
	int n, k;
	bool possible;

	while ( scanf("%d", &n) && n )
	{
		while ( scanf ("%d", &train[0] ) && train[0] )
		{
			k = 1;
			possible = true;

			for ( int l = 1; l < n; l++ )
				scanf("%d",&train[l]);	

			while ( !s.empty() )
				s.pop();

			for ( int l = 0; l < n && possible; l++ )
			{
				while ( train[l] >= k )
					s.push(k++);

				if ( s.top() == train[l] )
				       s.pop();
				else
				   	possible = false;
			}	

			if ( possible )
				puts("Yes");
			else
				puts("No");
		}
		puts("");
	}
}	

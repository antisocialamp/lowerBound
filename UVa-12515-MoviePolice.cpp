#include <iostream>

using namespace std;

string sig, movies[1000];
int movie, diffs, res,
    M, Q, repB;

int main()
{
	cin >> M >> Q;
	cin >> ws;
	for ( int l = 0; l < M; l++ )
		getline ( cin, movies[l]);

	while ( Q-- )
	{
		getline(cin, sig);
		res = -1;
		for ( int d = 0; d < M; d++ ) 
			for ( int k = 0, repB = movies[d].size() - sig.size();  k <= repB; k++ )
			{
				diffs = 0;

				for ( int s = k; s < sig.size() + k; s++ ) 
					if ( movies[d][s] != sig[s-k] ) diffs++;

				if ( ( res == -1 ) || ( diffs < res ) )
				{
					res = diffs;
					movie = d+1;
				}
			}
		cout << movie << endl;
	}
}

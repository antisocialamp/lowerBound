#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

string inputL;
int m, tmp,mx, answer;
vector<pair<int,int>> ones, threes;

int main ()
{
	while ( scanf("%d",&m) != EOF )
	{
		ones.clear();
		threes.clear();

		for ( int l = 0; l < m; l++ )
		{
			getline( cin>>ws, inputL);
			for ( int x = 0; x < m; x++ )
			{
				if ( inputL[x] == '1' )
					ones.push_back( make_pair(x,l) );
				else if ( inputL[x] == '3' )
					threes.push_back( make_pair(x,l) );
			}
		}
		
		answer = -1;
		for ( int l = 0; l < ones.size(); l++ )
		{
			mx = -1;
			for ( int x = 0; x < threes.size(); x++ )
			{
				tmp = abs(ones[l].first - threes[x].first) + 
				abs(ones[l].second - threes[x].second);
				if ( mx == -1 || tmp < mx )
					mx = tmp;

			}
			if ( mx > answer )
				answer = mx;
		}

		cout << answer << endl;
	}
					
				
}

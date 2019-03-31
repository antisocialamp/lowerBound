#include <cstdio>
#include <queue>

using namespace std;
using ii = std :: pair<int,int>;
using vii = vector<ii>;

auto comparisonOnly = [](const pair<int,int>& a, const pair<int,int>& b)
{
		if ( a.first == b.first )
			return a.second > b.second;
		else
			return a.first > b.first;
};

priority_queue<ii, vii, decltype(comparisonOnly)> registerQueue(comparisonOnly);
int periodArray[3001];

int main (){
	char registerTest[8];
	int queryID;

	while ( scanf("%s",registerTest) && registerTest[0] != '#' )
	{
		scanf("%d", &queryID);
		scanf("%d", &periodArray[queryID] );
		registerQueue.push( make_pair( periodArray[queryID], queryID));
	}

	int k, addingValue;
	scanf("%d", &k);

	while ( k -- )
	{
		queryID = registerQueue.top().second;
		printf("%d\n", queryID);
		registerQueue.push
			(make_pair(registerQueue.top().first + periodArray[queryID], queryID));
		registerQueue.pop();
	}
}

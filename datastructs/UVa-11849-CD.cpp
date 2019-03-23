#include <set>
#include <cstdio>

using namespace std;

set<int> cds;

int main()
{
	// N: number Of Cds Owned By Jack
	// M: number of Cds owned by Jill
	int N,M;
	int total, temp;

	while ( scanf("%d %d",&N,&M), N && M )
	{
		cds.clear();
		total = 0;

		while ( N-- )
		{
			scanf("%d",&temp);
			cds.insert(temp);
		}
		while ( M-- )
		{
			scanf("%d",&temp);
			if ( cds.find(temp) != cds.end() )
				total++;
		}
		printf("%d\n",total);
	}
}

#include <cstdio>
#include <set>

using namespace std;

multiset<int> bills;
multiset<int>::iterator myEnd;

int main ()
{
	int days, records, recordsPerDay, tempInt;
	long long result;
	while ( scanf("%d",&days), days )
	{
		result = 0;
		bills.clear();
		while ( days-- )
		{
			scanf("%d",&recordsPerDay);
			while ( recordsPerDay-- )
			{
				scanf("%d",&tempInt);
				bills.insert(tempInt);
			}
			myEnd = bills.end(); myEnd--;
			result += *myEnd - *bills.begin();
			bills.erase(myEnd);
			bills.erase(bills.begin());
		}
		printf("%lld\n",result);
	}
}

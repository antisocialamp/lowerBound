#include <cstdio>
#include <iomanip>
#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string, int> wordMap;

int main ()
{
	int cases;
	int total;
	string line;

	scanf("%d\n\n", &cases);

	while ( cases-- )
	{

		total = 0;

		scanf("%d\n\n",&cases);
		while ( getline(cin,line) && !line.empty() )
		{
			if ( wordMap.find(line) == wordMap.end() )
				wordMap[line] = 1;
			else
				wordMap[line] += 1;
			total++;
		}

		for ( const auto &pair : wordMap )
			printf("%s %.4lf\n", pair.first.c_str(), pair.second * 100.0 / total );

		if ( cases > 0 )
		{
			getline(cin, line);
			wordMap.clear();
			puts("");
		}
	}
}


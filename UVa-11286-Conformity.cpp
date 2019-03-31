#include <cstdio>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

// In this data structure we are to pass the "courses" in the string field,
// and their frequency in the second field
map<string, int> courses;

int main()
{
	int N, selc[5];
	string token;
	char ctoken[20];
	int totalStudents, maxCourseStudents;

	while ( scanf("%d", &N), N)
	{
		courses.clear();
		while ( N-- )
		{
			// Simple procedure: (impressively implemented by morris821028)
			// to turn the input in string
			scanf("%d %d %d %d %d", &selc[0], &selc[1], &selc[2], &selc[3], &selc[4]);
			sort ( selc, selc+5 );
			sprintf(ctoken, "%d %d %d %d %d", selc[0],selc[1],selc[2],selc[3],selc[4]);

			token = ctoken;
			// Passing the frequency
			// courses[y] students taking part in that class
			courses[token]++;
		}

		maxCourseStudents = 0;
		for ( map<string,int> :: iterator l = courses.begin(); l != courses.end(); l++ )
		{
			if ( l->second > maxCourseStudents )
				maxCourseStudents = l->second,
					totalStudents = 0;
		  	if ( l->second == maxCourseStudents )
				totalStudents += maxCourseStudents;
		}
		printf("%d\n",totalStudents);
	}
}

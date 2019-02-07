// U-Va: 400 - Unix ls

#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>

// There are many packages included for quicklier code construction

using namespace std;

int main () {
	int numberOfFiles;
	int minimumRows;

	while ( scanf ("%d",&numberOfFiles) == 1) {
		vector <string> input(numberOfFiles);
		while ( numberOfFiles-- )
			getline ( cin >> ws, input[l]);
		
		sort ( input.begin(), input.end() );
		
	}
}

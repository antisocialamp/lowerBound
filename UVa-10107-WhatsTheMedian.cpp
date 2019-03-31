// Problem : U-Va 10107: What is the Median?

#include <cstdio>		// printf scanf
#include <vector>		// vec
#include <algorithm>		// nth element

using namespace std;

int main () {
	vector <long> N;
	long temp;

	while ( scanf("%ld", &temp) != EOF ){
		N.push_back(temp);
		sort(N.begin(),N.end());
		
		if ( N.size()%2 == 1 )
			printf("%ld\n", N[N.size()/2]);
		else
			printf("%ld\n", (N[N.size()/2] + N[N.size()/2 - 1])/2 );	
	}	
}

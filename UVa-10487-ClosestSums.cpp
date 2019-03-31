#include <algorithm>		// sort
#include <cstdio>		// printf scanf

using std :: sort:

int main () 
{
	// Integer caseCounter: secondary variable to help us print the data in the given way
	// Integer n: primary variable (stores input value) to determine size of input array
	// Integer l: primary variable (stores input value) to determine number of requirements
	// Integer temp: holds the required value
	int caseCounter = 0;
	int n, l, temp, result;

	while (scanf ("%d", &n) == 1 )
	{
		// Input ends when n == 0
		if ( n == 0 ) return 0;

		int a[n];
		for ( int l = 0; l < n; l++ )
			scanf("%d",&a[l]);

		sort(a, a+n);

		scanf("%d", &l);

		while ( l-- )
		{
			scanf("%d", &temp);
			result = temp;
			
					

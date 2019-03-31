#include <cstdio> 		// i/o functions, printf scanf
#include <string> 		// string class
#include <iostream> 		// cin for strings;
using namespace std ;

int main () {
	// ! Input will contain more than one test cases !
	// Input style : int R (number of reqs) N (number of proposals), then prop-specific
	
	int N, R;
	// Outputed cases shall be numbered:
	int rfpNo = 1;
	
	// Functional variables;
	int index,		// Will store the position of the ideal proposal
	    compliance;		// Will store the compliance of the ideal proposal (used in comparisons)

	// string temp is simply a variable to save space
	string temp;


	while ( scanf ("%d %d", &R, &N) == 2 ){
		if ( R == 0 ) return 0;
		// Get rid of the unnesecary "string form" of the requirements
		for (int i = 0; i < R; i++)
			getline ( cin, temp );		
		// Index and compliance will explicitly be 0 at the beggining of each test case
		index = 0;
	       	compliance = 0;

		// Initializing our variables
		int requirements [N] ;
		double price [N] ;
		string names [N];
		
		// Case specific code block begins here:
		for ( int l = 0; l < N; l++ ) {
			cin >> names[l];	
			scanf ( "%lf %d" , &price[l], &requirements[l] );
			// Get rid of the reqs:
			for ( int p = 0; p < requirements[l]; p++ )
				getline ( cin, temp );
			// Checking eligibility :
			if ( requirements[l] >= compliance ){
				if ( requirements[l] > compliance )
					index = l;
				else if ( requirements[l] == compliance )
					if ( price[l] < price[index] )
						index = l;
			}
		
		}

		printf ( "%s%d\n", "RFP #", rfpNo );
		cout << names[index] << "\n\n" ;
		rfpNo++;	
	}	
}

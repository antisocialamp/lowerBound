#include <algorithm>		// next_permutation
#include <iostream> 		// will be better due to string mod
#include <string> 		// string

using namespace std;

int main () {
	string sInput;

	while (true){
		getline ( cin, sInput );
		if ( sInput[0] == '#' ) return 0;
		
		if ( next_permutation(sInput.begin(), sInput.end()))
			cout << sInput << endl;
		else
			cout << "No Successor" << endl;
	}
}


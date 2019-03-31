// Problem: U-Va 1237 - Expert Enough?

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main () {
	int cases,
	    dataSize,
	    queries,
	    compBrands,
	    brandNo,
	    price;
	
	vector<int> lows, highs;
	vector<string> names;
	
	cin >> cases;
	bool newLine = false;
	while ( cases-- ){
		if ( newLine )
			cout << endl;
		cin >> dataSize;
		
		lows.resize(dataSize);
		highs.resize(dataSize);
		names.resize(dataSize);

		for ( int l = 0; l < dataSize; l++ )
			cin >> names[l] >> lows[l] >> highs[l];

		cin >> queries;
		while ( queries-- ){
			compBrands = 0;
			brandNo = 0;

			cin >> price;
			for ( int l = 0; l < dataSize; l++ )
				if ( price >= lows[l] && price <= highs[l] ){
					compBrands ++;
					if ( compBrands == 1 )
						brandNo = l;
					else
						break;
				}
			if ( compBrands != 1 )
				cout << "UNDETERMINED" << endl;
			else
				cout << names[brandNo] << endl;
		}
		newLine = true;
	}
}


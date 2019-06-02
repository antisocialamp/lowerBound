#include <iostream>
#include <string>

using namespace std;

int main()
{
	bool open=false;
	string mL;
	int index;

	while ( getline(cin,mL) )
	{
		index = 0;
		while ( true )
		{
			index = mL.find('"',index);
			if ( index == string::npos )
				break;
			else
				if ( open )
				{
					open = false;
					mL.replace(index,1,"''");
				}
				else
				{
					open = true;
					mL.replace(index,1,"``");
				}
		}
		cout << mL << endl;
	}
}


			

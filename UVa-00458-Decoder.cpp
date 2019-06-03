#include <iostream>
#include <string>

using namespace std;

int main()
{
	string ins;
	char a;
	while ( getline(cin, ins) )
	{
		for ( int i = 0; i < ins.length(); i++ )
		{
			a = ins[i] - 7;	
			cout << a;
		}
		cout << endl;
	}
}

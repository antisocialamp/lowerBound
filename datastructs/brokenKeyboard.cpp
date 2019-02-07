// Problem : U-Va ID 11988 - Broken Keyboard (a.k.a. Beiju Text)

#include <cstdio>
#include <list>
#include <cstring>

using namespace std;

int main (){
	list<char> beijuLine;
	list<char> :: iterator ex;

	char inputLine[100001];
	
	// while there is still input
	while ( scanf("%s", inputLine) != EOF ){
		ex = beijuLine.begin();
		int len = strlen(inputLine);		
		for ( int l = 0; l < len; l++){
			// if input character is [ (which means home key pressed)
			if ( inputLine[l] == '[' ) 
				ex = beijuLine.begin();
			// if input character is ] (which means end key pressed)
			else if ( inputLine[l] == ']' )
				ex = beijuLine.end();
			else	
				beijuLine.insert( ex, inputLine[l] );
		}
		
		// print every character in the list
		for ( ex = beijuLine.begin(); ex != beijuLine.end(); ex++ )
			printf ("%c", *ex );
		// print a new beijuLine character and then erase the contents of line
		printf ("\n");
		beijuLine.clear();
		
	}
}

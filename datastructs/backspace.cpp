// Problem : Kattis ID : backspace
#include <cstdio>
#include <deque>

using namespace std;

int main (){
	// deque result will store the chars passed by the user:
	// if temp (stands for temporary char) is equal to <, then it means that the 
	// user simply wanted to delete the last char entered (thus, the last element in result)
	// else if it is not '<' it is instantly passed in result
	// The input ends with '\n'
	deque<char> result;
	char temp;
	scanf ("%c", &temp);
	while ( temp != '\n' ){
		if ( temp == '<' )
			result.pop_back();
		else
			result.push_back(temp);
		scanf("%c", &temp);
	}
	for (int i = 0; i < result.size(); i++ )
		printf ("%c", result[i]);	
	// printf ("\n");
}

// Problem: UVa ID: 790 - Head Judge Headache

#include <algorithm> 		//sort
#include <cstdio>		//formatted input/output
#include <vector>		//to store the teams

using namespace std;

struct team {
	int number;
	int problemsSolved;
	int time; 		//in seconds;
	int rank;
};

// problemsSolved -> time -> teamNumber;
bool sortFunc (team a, team b){
	// First checking whether the two teams have solved the same number of problems
	if ( a.problemsSolved != b.problemsSolved ){
		if ( a.problemsSolved > b.problemsSolved ) return false;
		else return true;	
	}
	else {
		// Now checking the second parameter, time
		if ( a.time != b.time ){
			if ( a.time < b.time ) return false;
			else return true;
		}
		else {
			if ( a.number < b.number ) return false;
			else return true;
		}

	}

}



int main () {
	vector<team> teamVector; //LOL
	int teamSoFar = 0;
	int tempInt;  		 // variable that will be used in many purposes (-_-)
	while ( scanf("%d", &teamVector[l].number) != EOF ){
		

		
	}
}


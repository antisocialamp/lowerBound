#include <cstdio>
#include <algorithm>

using namespace std;

int main(){

	// Input specifications: first line contains integer N, number of test cases
	// Next N lines contain 3 numbers that depict the salary of the employees
	// Task : to print the salary with the medium value for each test case

	int N; // Number of test cases
	int a,b,c; // Salaries
	int result; // what i am gonna print
	scanf ("%d",&N); // passing the value to N

	// The problem should be repeated for each test case
	for ( int l = 1; l <= N; l++) {
		scanf ("%d %d %d", &a, &b, &c);
		result = a + b + c - max(a, max (b,c)) - min (a, min (b,c));
	       	printf ("Case %d: %d\n", l, result);
	}
	return 0;

}


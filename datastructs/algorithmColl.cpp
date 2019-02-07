#include <vector>
#include <cstdio>

using std :: vector;

int main () {
	int arr[] = {16, 2, 55, 23};
	vector<int> v(arr, arr + 4);
	for ( auto x :: v)
	//for (int x = 0; x < 4; x++)
		printf ("%d\t", v[x]);
	printf ("\n");
	return 0;

}

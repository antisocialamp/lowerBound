#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	// Input : Line 1 : N (number of cases)
	// N lines : L (number of children taking part)
	// 		speed (childs speed)
	int N, L, speed;
	// However, we set best as the fastest kid among the children, cause his speed the clown must maintain
	int best;

	scanf("%d",&N);
	for ( int l = 0; l < N; l++){
		scanf ("%d", &L);
		best = 0;
		for ( int i = 0; i < L; i++){
			scanf("%d", &speed);
			best = max (best,speed);
		}
		printf ("Case %d: %d\n", l+1, best);
	}
}

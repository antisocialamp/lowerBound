#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
	long long army1, army2;
	while ( scanf("%lld %lld", &army1, &army2) != EOF )
		printf("%lld\n", abs(army1-army2));
}

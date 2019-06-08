#include <cstdio>

int main()
{
	int cases, farmers;
	long long farmsz, animals, friendliness, sum;

	scanf("%d",&cases);
	while ( cases-- )
	{
			sum = 0;
			scanf("%d",&farmers);
			while ( farmers-- )
			{
					scanf("%lld %lld %lld", &farmsz, &animals, &friendliness);
					sum += farmsz * friendliness;
			}
			printf("%lld\n", sum);
	}
}


#include <queue>
#include <cstdio>

using namespace std;

queue<int> ferry;

int main ()
{
	// Int c: Cases
	// Int n: Number of cars
	// Int t: Time from one side to the other
	// Int time: (actual) time
	// Int side: (0 -> left while 1 -> right)
	// Int tempTime: (input/passed) time
	int c, n, t, m, time, side, tempTime;
	// Character array tempSide: (input/passed) side
	char tempSide[5];

	scanf("%d",&c);
	printf ("%d", c);

	while ( c-- )
	{
		scanf("%d %d %d", &n, &t, &m);
		printf ("%d %d %d", n, t, m);
		// For simplier code (loop):
		time = -t;
		side = 0;
		tempTime = -1;

		while ( n )
		{
			time += t;
			side ^= 1;

			while ( !ferry.empty() )
			{
				printf ("%d\n", time);
				ferry.pop();
				n--;
			}

			if ( tempTime == -1 )
				scanf("%d %s", &tempTime, tempSide);

			// Checking if the ferry is on the right side: (meaning the correct one :P)
			if ( ( ( tempSide == "right" ) && ( side == 1 ) )
					|| ( ( tempSide == "left") && ( side == 0 ) ) )
				time = tempTime;

			while ( scanf ("%d %s", &tempTime, tempSide) &&
					( ( ( tempSide == "right" ) && ( side == 1 ) )
					|| ( ( tempSide == "left") && ( side == 0 ) ) ) &&
						tempTime == time )
			{
				ferry.push(1);
				tempTime = -1;
			}
		}

		puts("");
	}
}


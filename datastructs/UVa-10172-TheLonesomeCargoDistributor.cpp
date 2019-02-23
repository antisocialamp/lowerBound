#include <cstdio>
#include <stack>
#include <queue>

using namespace std;

stack<int> myCar;
queue<int> stationQ[100];

int main ()
{
	// N: number of stations in the ring
	// S: cargo capacity
	// Q: maximum number of cargos B queue can accomodate
	// cargos: number of cargos existing in each test case
	// time: the result
	int c, N, S, Q, cargos, time;
	int location, temp;

	scanf("%d",&c);

	while ( c-- )
	{
		scanf("%d %d %d", &N, &S, &Q);
		cargos = 0;

		// Input procedure;
		for ( int l = 0; l < N; l++ )
		{
			// Checking how many cargos the station stores
			scanf ("%d", &location );

			// While the station has cargos
			while ( location-- )
			{
				cargos++ ;
				scanf ("%d", &temp);
				stationQ[l].push(temp-1);
			}
		}

		// From now on, location will be used to "mark" the current station
		int location = 0;
		time = 0;

		// This should be interpreted like: While there are cargos to move, proceed:
		while ( cargos )
		{
			// Check whether unload possible
			while ( !myCar.empty() && (stationQ[location].size() < Q
						|| myCar.top() == location) )
			{
				if ( myCar.top() != location)
					stationQ[location].push( myCar.top() );
				else
					cargos--;
				time++;
				myCar.pop();
			}

			// If there are any cargos in the station, pick as many as possible
			while ( myCar.size() < S &&  !stationQ[location].empty() )
			{
				myCar.push( stationQ[location].front() );
				stationQ[location].pop();
				time++;
			}

			// Move to the next station: Distance covered in 2 minutes:
			time += 2;

			if ( location == N-1 )
				location = 0;
			else
				location++ ;
		}
		// Printing two less due to the fact that the last addition doesn't count
		printf("%d\n", time - 2) ;
	}
}

#include <cstdio>
#include <queue>

using namespace std;

// The reason why I chose priority_queue vs simple queue is the fact that priority queue remains
// after every insertion.
// Syntax here: type, container_type, comparisonFunction
priority_queue<int, vector<int>, greater<int>> input;

int main()
{
	int N,
	    runningSum,
	    inputInt,
	    tempInt;

	while ( scanf("%d",&N), N )
	{
		runningSum = 0;
		while ( !input.empty() )
			input.pop();

		for ( int l = 0; l < N; l++ )
		{
			scanf("%d",&inputInt);
			input.push(inputInt);
		}

		while ( input.size() > 1 )
		{
			tempInt = input.top();
			input.pop();
			tempInt += input.top();
			input.pop();
			runningSum += tempInt;
			input.push(tempInt);
		}

		printf("%d\n", runningSum );
	}
}

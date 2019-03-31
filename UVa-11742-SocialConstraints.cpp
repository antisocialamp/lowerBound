#include <algorithm>	// next_permutation
#include <cstdio>

using namespace std;

struct constraint
{
	int personA;
	int personB;
	int distance;
};

// Declarations:
int sizeOfGroup, numberOfConstraints, counter,
	party[8] = {0,1,2,3,4,5,6,7}, tempArray[8];
constraint allConstraints[20];

bool isEverythingFine()
{
	//tempArray is used to store the locations of the elements in party array
	for ( int l = 0; l < sizeOfGroup; l++ )
		tempArray[party[l]] = l;

	for ( int l = 0; l < numberOfConstraints; l++ )
	{
		if ( allConstraints[l].distance < 0 )
		{
			if ( abs(allConstraints[l].distance) >
		abs( tempArray[allConstraints[l].personA] - tempArray[allConstraints[l].personB]))
				return false;
		}
		else
			if ( allConstraints[l].distance <
		abs( tempArray[allConstraints[l].personA] - tempArray[allConstraints[l].personB]))
			return false;
	}
	return true;
}
int main()
{

	// Input part:
	while ( scanf("%d %d", &sizeOfGroup, &numberOfConstraints), sizeOfGroup)
	{
		// printf("%d %d\n", sizeOfGroup, numberOfConstraints);
		for ( int i = 0; i < numberOfConstraints; i++ )
			scanf("%d %d %d", &allConstraints[i].personA,
					&allConstraints[i].personB,
					&allConstraints[i].distance);

		// Input part finished: Main part of the function
		counter = 0;
		do
		{
			if ( isEverythingFine() )
				counter++;
		}
		while ( next_permutation( party, party + sizeOfGroup ) );

		// Output:
		printf("%d\n", counter);
	}
}

#include <cstdio>
#include <algorithm> //max
#include <map>

using namespace std;

int main()
{
    int cases,
	inputInt,
	leftIndex,
	packageSize,
	tempSize,
	sequenceLength;

    map<int,int> inputMap;

    scanf("%d",&cases);

    while( cases-- )
    {
	inputMap.clear();
	scanf("%d",&sequenceLength);

        leftIndex = packageSize = tempSize = 0;

	// Iterating through the input and moving the leftIndex (let's say, temporary sequence's
	// starting point to the last occurence of a character
        for ( int l = 0; l < sequenceLength; l++ )
        {
		scanf("%d", &inputInt);
            	if( inputMap[inputInt] > 0 )
            	{
			// The leftIndex will either be 0 (the start of the array) or at the last
			// occurence of a duplicate character (cause no duplicates should exist
			// within a package)
                	leftIndex = max( leftIndex, inputMap[inputInt] );
			// Temporary sequence's size is equal to:
			// ( currentIndex - starting(leftIndex )
               		tempSize = l - leftIndex;
            	}

            	tempSize++;
		// Last occurence of "inputInt" **Must be greater than 0**
            	inputMap[inputInt] = l + 1;
            	packageSize = max( tempSize, packageSize );
        }
        printf("%d\n",packageSize);
    }
    return 0;
}


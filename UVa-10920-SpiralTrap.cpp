#include <cstdio>		//scanf printf

#define sqr(i) i*i

int main () 
{
	// List of variables.
	int resultX, resultY, currentX, currentY, currentValue,
	    squareLength, SZ, P;

	bool notFound;	
	while ( scanf("%d %d", &SZ, &P) == 2, SZ )
	{
		// The location of the starting cell
		currentX = SZ/2 + 1;
		currentY = currentX;
		notFound = true;	

		for ( squareLength = 1; ; squareLength+=2 )
			if ( P < sqr(squareLength) )
				break;

		currentX += squareLength / 2;
		currentY = currentX;
		currentValue = sqr(squareLength) - squareLength + 1;

		if ( P >= currentValue )
		{
			resultX = currentX;
			resultY = currentY - ( P - currentValue );
			notFound = false;
		}

		currentValue -= squareLength - 1;
		currentY -= squareLength -1;

		if ( notFound && P >= ( sqr(squareLength) - 2*squareLength + 2) )
		{
			resultY = currentY;  
			resultX = currentX - ( P - currentValue) ;
			notFound = false;	
		}

		currentValue -= squareLength - 1;
		currentX -= squareLength - 1;

		if ( notFound && P >= ( currentValue - squareLength + 1 ) )
		{
			resultX = currentX;
			resultY = currentY - ( P - currentValue );
			notFound = false;
		}

		currentY += squareLength - 1;
		currentValue -= squareLength - 1;

		if ( notFound )
		{
			resultY = currentY;
			resultX = currentX - ( P - currentValue );
		}
		
		printf ("%s = %d, %s = %d.\n","Line", resultY, "column", resultX);
	}
}


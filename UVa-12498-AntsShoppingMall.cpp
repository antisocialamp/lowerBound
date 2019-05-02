#include <cstdio>
#include <algorithm>

using namespace std;

char shoppingMall[50][50];
int column,row,t,
    leftBound, rightBound,
    result, tmp;
bool ok;

int main()
{
	scanf("%d",&t);
	for ( int cs = 0; cs < t; cs++ )
	{
		scanf("%d %d",&row, &column);
		for ( int r = 0; r < row; r++ )
			scanf("%s",shoppingMall[r]);
			
		result = -1;
		for ( int c = 0; c < column; c++ )
		{
			tmp = 0;
			ok = true;
			for ( int r = 0; r < row; r++ )
			{
				if ( shoppingMall[r][c] == '0' ) continue;

				leftBound = rightBound = -1;

				if ( c > 0 )
				       for ( int k = c; k >= 0; k-- )
					       if ( shoppingMall[r][k] == '0' )
					       {
						       leftBound = c - k ;
						       break;
					       }

				if ( c + 1 < column )
					for ( int k = c; k < column; k++ )
						if ( shoppingMall[r][k] == '0' )
						{
							rightBound = k - c;
							break;
						}
				if ( leftBound == -1 && rightBound == -1 )
					ok = false;
				else if ( leftBound == -1 )
					tmp += rightBound;
				else if ( rightBound == -1 )
					tmp += leftBound;
				else
					tmp += min ( rightBound, leftBound );
			}

			if ( ok && ( ( result == -1 ) || ( tmp < result ) ) ) result = tmp;
			if (!ok) continue;
		}
		
		printf("Case %d: %d\n", cs+1, result);
	}
}

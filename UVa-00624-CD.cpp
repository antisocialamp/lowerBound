#include <cstdio>

using namespace std;

int score, tempScore, tracks, target, gap, 
    answerArr[20], tempArr[20], input[20];

void backtracking(int no)
{
	if ( target - tempScore < gap )
	{
		gap = target - tempScore;
		score = tempScore;
		for ( int l = 0; l < tracks ; l++ )
				answerArr[l] = tempArr[l];
	}
	for ( int l = no; l < tracks; l++ )
		if ( tempScore + input[l] <= target)
		{
			tempArr[no] = input[l];
	   		tempScore += input[l];
	 		backtracking(l+1);
			tempScore -= input[l];
			tempArr[no] = 0;
		}	
}

int main()
{
	while ( scanf("%d %d",&target, &tracks) != EOF )
	{
		for ( int l = 0; l < tracks; l++ )
			scanf("%d",&input[l]);
		tempScore = score = 0;
		gap = target;
		backtracking(0);
		for ( int l = 0; l < tracks ; l++ )
			if ( answerArr[l] != 0 )
				printf("%d ",answerArr[l]);
		printf("sum:%d\n",score);
	}
}

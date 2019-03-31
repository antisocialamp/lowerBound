#include <cstdio>

int main(){
	// The input will contain multiple test cases. Ends when H == 0. Var description:
	// 	1. int height ( the height the snail is supposed to climb )
	// 	2. double vUp ( snail's initial vUp )
	// 	3. int vDown ( snail's negative vUp ) --> is a constant for each case
	// 	4. double fatigue ( given in percentage is the decline in snails vUp per day)
	int height, vDown;
	double vUp, fatigue;	
	// double snHeight (stands for snail height) is the real time height of the snail
	double snHeight;

	// Looping until there is no input:
	while ( scanf ("%d %lf %d %lf", &height, &vUp, &vDown, &fatigue) == 4 ){
		// The program should end if height == 0:
		if ( height == 0 ) return 0;
		// snHeight is always 0 at the beggining
		snHeight = 0;
		// fatigue is entered as a percentage :
		fatigue = fatigue/100.0 * vUp;
		// The first day is considered day 1 and not day 0
		for ( int day = 1; ; day++ ) {
			snHeight += vUp;
			if ( snHeight > height ){
				printf ("%s %d\n", "success on day",day);
				break;
			}
			snHeight -= vDown;
			if ( snHeight < 0 ){
				printf ("%s %d\n", "failure on day",day);
				break;
			}
			if ( vUp != 0){
				if ( vUp - fatigue > 0 )
					vUp -= fatigue;
				else
					vUp = 0;
			}
		}
	}
}

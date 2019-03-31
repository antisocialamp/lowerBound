// Problem: U-Va 10114 - Loansome Car Buyer

#include <cstdio>

struct record{
	int month;
	double deprecation;
};

int main () {
	// Input will contain multiple test cases:
	// input style: duration downPayment loan recordN (recordN stands for record number)
	// 		record lines below describing deprecation
	
	int duration,
	    recordN,
	    currentMonth,
	    resultIndic;

	double downPayment,
	       monthlyPayment,
	       loan,
	       carValue,
	       tempDep;

	while ( scanf("%d %lf %lf %d", &duration, &downPayment, &loan, &recordN) == 4 ){
		if ( duration <= 0 ) return 0;

		// At first collecting input in a record array:
		record records[recordN];
		carValue = loan + downPayment;
		monthlyPayment = loan / duration;

		for ( int l = 0; l < recordN; l++ )
			scanf ("%d %lf", &records[l].month, &records[l].deprecation);
			
		// Input collection finished.
		currentMonth = 1;
		resultIndic = 0;
		
		carValue -= carValue * records[resultIndic].deprecation;

		while ( loan > carValue ){
			loan -= monthlyPayment;

			if ( currentMonth == records[resultIndic+1].month )
				resultIndic++;

			carValue -= (carValue * records[resultIndic].deprecation );

			currentMonth++;
		}

		currentMonth--;

		if ( currentMonth == 1 )
			printf ("%d month\n", 1);
		else
			printf ("%d months\n", currentMonth);
		
	}
}	

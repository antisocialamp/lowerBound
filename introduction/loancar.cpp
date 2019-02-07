#include <cstdio>

int main(){
	// Input: 1st Line : 	int loanDur (loan duration in months)
	// 			double payment (buyers monthly payment)
	// 			double loanVal ( loan value )
	// 			int nofRecs ( number of records that follow )
	int loanDur, nofRecs;
	double payment, loanVal, carVal; // carVal will be set equal to loan val upon initializationand then used for comparison purposes.
	
	// Other variables that need to be declared here to avoid runtime errors:
	// int month ( passive variable to check whether a month is missing)
	// double depRate ( rate in which car value declines (montly))
	int month;
	double depRate;	

	
	// The input will contain multiple loans (test cases)
	while ( scanf ("%d %lf %lf %d", &loanDur, &payment, &loanVal, &nofRecs) == 4 ){
		carVal = loanVal;
		for ( int l = 0; l < loanDur; l++ ){
			scanf ( "%d", &month);
			if ( month == l )
				scanf ("%lf", &depRate);
			carVal -= carVal * depRate;
			loanVal -= payment;
			// Asked to print the number of months before the borrower owes less than car's worth
			if ( carVal < loanVal ){
			 	if ( (month-1) == 1)
					printf ("1 month\n");
				else
					printf ("%d months\n", month--);
			}
		}
	}
}

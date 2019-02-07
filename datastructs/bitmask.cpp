#include <cstdio>

int main () {
	printf ("%d", 1<<3);		// moves bit 1 (index 0) 3 positions to the left
	printf ("%d", 58 ^ (1<<3));	// xor operator: if
}

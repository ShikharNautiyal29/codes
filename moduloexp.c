// Recursive C program to compute modular power
#include <stdio.h>

int exponentMod(int A, int B, int C)
{
	// Base cases
	if (A == 0)
		return 0;
	if (B == 0)
		return 1;

	// If B is even
	long y;
	if (B % 2 == 0) {
		y = exponentMod(A, B / 2, C);
		y = (y * y) % C;
	}

	// If B is odd
	else {
		y = A % C;
		y = (y * exponentMod(A, B - 1, C) % C) % C;
	}

	return (int)((y + C) % C);
}

// Driver program to test above functions
int main()
{
int A = 2, B = 5, C = 13;
printf("Power is %d", exponentMod(A, B, C));
return 0;
}


#include "main.h"
#include <stdio.h>

/**
 *Using pointers from an external function to swap into main function
 *
 * Return 0 as the default
 */
int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}

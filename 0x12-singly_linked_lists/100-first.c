#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - Function that prints a sentences before the main
 *         function executes
 *
 * Description: Function that is a constructor attributes
 *              which prints sentences before the main function executes
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

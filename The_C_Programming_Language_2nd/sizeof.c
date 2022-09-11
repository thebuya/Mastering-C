#include <stdio.h>
#include <stdlib.h>
/**
* Program Description
*/


/* Function Description */
int main (void)
{
	int itgr;
	float flt;
	double dbl;
	char name;
	char chtr;

	name = "Morris Higenyi";

	printf("The size of an intenger is %lu bytes\n", sizeof(itgr));
	printf("The size of a character is %lu bytes\n,", sizeof(chtr));
	printf("The size of a double is %lu bytes\n,", sizeof(dbl));
	printf("The size of a float is %lu bytes\n,", sizeof(flt));
	printf("The size of a my name is %lu bytes\n,", sizeof(name));

	return (0);
}
/**
 * The sizeof(variable) operator computes the size of a variable.
 * And, to print the result returned by sizeof,
 * we use either %lu or %zu format specifier.
 */

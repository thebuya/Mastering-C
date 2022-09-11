#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* Had to add stdio.h
* Provides printf
*/

/* Assignment-Zero */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
/* Answer should be it. */
	return (0);
}

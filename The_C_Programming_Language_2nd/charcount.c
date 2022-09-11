#include <stdio.h>
/* count characters in input; 1st version */ 

int main()
{
	long nc;
/*Use long -> it takes a little more space to handle an EOF*/

	nc = 0;
	while (getchar() != EOF)
		nc = nc+1; 
	/*EOF is Control + D */
	printf("WTF %10ld\n",nc);

	return (0);
}

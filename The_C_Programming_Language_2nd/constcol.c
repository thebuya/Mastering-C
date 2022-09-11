#include <stdio.h>
#include <stdlib.h>


enum collectors { collector1, collector2, collector3,};

int main(void)
{
	enum collectors;
	
	collectors = { collector1, collector2, collector3,};

	printf("The collectors are %d", collectors[0]);

	return(0);
}
enum cars{

	BMW=3,

	Ferrari=5,

	Jeep=0,

	Mercedes-Benz=1

};

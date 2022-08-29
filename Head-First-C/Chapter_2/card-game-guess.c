#include <stdio.h>

int main() 
{
	char cards[]= "JQK";
/*	char *cards = "JQK"; */
 	char a_card = cards[2];
 	cards[2] = cards[1];
	cards[1] = cards[0];
 	cards[0] = cards[2];
	cards[2] = cards[1];
	cards[1] = a_card;
	puts(cards);

	return 0;
}
/* -------------------------------------Brings a Bus Error! Dang it.----- 	*/



/*		It all comes down to how C uses memory.	*/
/*		char *cards = "JQK"	<------- This variable  update the screen	*/
/*		char cards[] = "JQK"	<------- This variable can be updated.		*/

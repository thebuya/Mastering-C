/*
* Program to calculate the number of cards in the shoe. 
* This code is released under the Art-Vault License .(c)2022, The-Buya.
*/




............................................................................

#include <stdio.h>
/*-----------------*/

/* int main()	/* -->>>  The function name comes after the return type */

{
	int decks;
	puts("Enter a number of decks");
	scanf("%i", &decks);

	if (decks < 1) {
		puts("That is not a valid number of decks");
		return 1; 
	}
	
	printf("There are %i cards\n", (decks * 52));
	return 0;
}  */

..........................................................................






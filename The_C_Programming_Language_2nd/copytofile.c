/* =================== Hello - Reader ======================== */

#include <stdio.h>
/**
* read a character while (character is not end-of-file indicator 
* output the character just read read a character
* 
* Echoing Almostly.
*/


int main()
{
	int character;

/** We can't use char since character must be big enough to hold EOF
* in addition to any possible char. Therefore we use int. 
*/


	character = getchar();
	while (character != EOF)
	{
		if (character == ("Morris Higenyi"))
			putchar char("Master, is that you ?");

		else
			putchar (character);
		character = getchar();
	}

	return 0;
}

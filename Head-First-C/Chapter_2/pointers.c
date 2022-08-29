		/*	POINTERS AND MEMORY	*/


/* Pointers are Easy to Understand, just take your time 			*/
/* -------------------------------------------------------------------------- 	*/

/* Definitions used in Chapeter: */
/*---------------------------------------------------------- */
/*Pointers are memory adresses for where the data is stored.The data that that	*/
/* 		is stored is any data. All data has an address where it is 	*/
/*		stored.		*/

/*Pointer Variables are variables that store the memory address. Their value is */
/*		a memory address. There are two types;  Global and Stack	*/
/* / a)	Global Pointers are called from outisde the main function: Ln.xxx 	*/
/* b)	Stack pointers are called from within the function: Ln.xx		*/


/* Usages of Pointers  */
/*-------------------------------------------------------------------------- 	*/
/*a)	Pointers are used while moving around information, helps keep track of  */
/* stuff. It is sort of like a tracker.*/
	
			/*//Practical below //*/

/*		int x = 4;	*/
/*		printf ("The memory address of varaible x is  %p\n", )&x; */
					/* -----Use this with int main() ---- 	*/

/*b)	Pointers are used to read the contents, [Over variables also?, I wonder]*/
/*c)	Used to change the contents of an address				*/


/* ****Find attached screenshots in folder that explain  or go read the book ** */










/* -------------------------------------------------------------------------- 	*/
/* To understand pointers, you’ll need to dig into the memory of the computer. 	*/
/* There are two kinds of Pointer Variables Remember; Global and Stack Pointers.*/

/* -----------------------------------------------------------------------	*/

/*	int y = 1 <----- Lives in Global because it is outside main function 	*/
/*	int main()								*/
/*	{									*/
/*		int x =4 <-----Stack because its stacked within main function	*/
/*		return 0							*/
/*	} 									*/
/* ------------------------------------------------------------------------- 	*/




/* Page 52 -> Example 1: ------- The South East Sailing Boat ---- */
/* :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: */

	#include <stdio.h>

	void go_south_east ( int* lat, int* lon)
	{
    		*lat = *lat - 1;
    		*lon = *lon + 1;
	}

	int main() 
	{
    		int latitude = 32; 
    		int longitude = -64;
        	
		go_south_east( &latitude, &longitude);
		printf("Avast! Now at: [%i, %i]\n", latitude, longitude);
		
		return 0;	
	}	
/* ----------------------------------------------------------------------------- */



/* Some coders avoid using pointer arithmetic because it’s easy to get it wrong. */
/* But it can be used to process arrays of data efficiently. */

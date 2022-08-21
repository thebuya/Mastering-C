#include <stdio.h>

int main() 
{
	puts("C Rocks!");
	return 0;
}

#include <stdio.h>
I* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */
main()
{
int fahr, celsius;
int lower, upper, step;
lower = 0; upper = 300; step = 20;
/* lower limit of temperature table */ /* upper limit */
/* step size */
fahr = lower;
while (fahr <= upper) {
celsius = 5 * (fahr-32) I 9; printf("%d\t%d\n", fahr, celsius); fahr = fahr + step;
}
}

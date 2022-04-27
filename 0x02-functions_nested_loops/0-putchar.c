<<<<<<< HEAD
#include<stdio.h>

/**
 *  main - begins
 *
 *  Return: Always 0
 */

int main (void)
{
	write(1,"_putchar\n");
=======
#include "main.h"
/**
 *  * main - Entry point
 *
 *    * Return: Always 0 (Success)
 */
int main(void)
{
	char put[] = "_putchar";

	int a;

	for (a = 0; a < 8; a++)
	{
		_putchar(put[a]);
	}
	_putchar('\n');
>>>>>>> 38f20bf48f8b2ded8c1d8bceee0118660eccf37d
	return (0);
}

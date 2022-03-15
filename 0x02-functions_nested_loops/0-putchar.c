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

	for (a=0; a<8; a++)
	{
		_putchar(put[a]);
	}
	_putchar('\n');
	return (0);
}

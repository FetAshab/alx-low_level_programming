<<<<<<< HEAD
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void);

int main(void)
{
print_alphabet();
return (0);
}
void print_alphabet(void)
{char a;
for (a = 'a'; a <= 'z'; a++)
        putchar(a);
putchar('\n');
=======
#include "main.h"

/**
 *  * print_alphabet - print alphabet in lowercase.
*/
void print_alphabet(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
>>>>>>> 38f20bf48f8b2ded8c1d8bceee0118660eccf37d
}

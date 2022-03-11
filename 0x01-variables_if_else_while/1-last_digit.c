#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* your code goes there */
				float lastDigit = n % 10;
				if(lastDigit>5)
					printf("\nLast digit of %d",n,"and is greater than 5");
				else if(lastDigit>0 && lastDigit<6)
					printf("\nLast digit of %d",n,"and is less than 6 and not 0");
				else (lastDigit==0)                                                                                                                  
				         printf("\nLast digit of %d",n,"and is zero");  
         
				return (0);
}

<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print last digit in random number
 * 
 * Description: print last digit in random number
 * 
 * Return : Always 0 (Success)
*/

int main(void)
{
    int n, last;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    last = n % 10;
    if (last > 5)
        printf("Last digit of %d and %d is greater than 5\n", n, last);
    else if (last == 0)
        printf("Last digit off %d is %d and is 0\n", n, last);
    else if (last < 6 && last != 0)
        printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
    return (0);
}
=======
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) == 0)
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	else if ((n % 10) > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);

	return (0);
}
>>>>>>> 23b082383192bc4b811699387293940f3763965c

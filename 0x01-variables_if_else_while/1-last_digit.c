#include <stdib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always return 0 (success)
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = % 10;
	if (m > 5)
		printf("Last digit of %d is %d and is a greater than 5\n", n, m)
			if (m == 0)
				printf("Last digit of %d is %d and is 0\n", n, m);
	if (m < 6 && m != 0)
		printf("Last digit 0f %d is %d and is less thand 6 and not 0\n", n, m);
                                                return (0);

}

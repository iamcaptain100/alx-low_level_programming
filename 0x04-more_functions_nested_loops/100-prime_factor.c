#include <stdio.h>
#include "main.h"
/**
 * main - prints the largest prime factor of 612852475143
 * Return: always 0 (success)
 **/

int main(void)
{

	long x, maxf;
	long number =612852475143;
	double square = sqrt(number);
	
        for (x = 1; x <= square; x++)
	{
	if (number % x == 0)
	{
	maxf = number / x;
	}
	}
	printf("%1u\n", maxf);
	return (0);
}

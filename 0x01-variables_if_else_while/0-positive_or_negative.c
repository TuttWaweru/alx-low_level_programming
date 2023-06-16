#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char *message;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n % 2 == 0)
	{
		message = "is positive";
	}
	else
	{
		message = "is negative";
	}
	printf("%i %s\n", n, message);
	return (0);
}

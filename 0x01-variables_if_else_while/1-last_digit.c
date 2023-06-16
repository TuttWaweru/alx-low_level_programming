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
	char startingString[] = "Last digit of";
	char *conditionString;
	int lastNumber;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastNumber = n % 10;
	if (lastNumber > 5)
	{
		conditionString = "and is greater than 5";
	}
	else if (lastNumber == 0)
	{
		conditionString = "and is 0";
	}
	else
	{
		conditionString = "and is less than 6 and not 0";
	}
	printf("%s %i is %i %s\n", startingString, n, lastNumber, conditionString);
	return (0);
}

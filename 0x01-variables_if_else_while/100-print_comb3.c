#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int tens;
	int ones;

	for (tens = 0; tens < 10 ; tens++)
	{

		for (ones = 0; ones < 10; ones++)
		{
			if (tens != ones && ones != 0 && (tens - ones) < 0)
			{
				putchar('0' + tens);
				putchar('0' + ones);
				if (tens != 8 || ones != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

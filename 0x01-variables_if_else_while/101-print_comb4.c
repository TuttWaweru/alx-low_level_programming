#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int hundreds;
	int tens;
	int ones;

	for (hundreds = 0; hundreds < 10; hundreds++)
	{
		for (tens = 0; tens < 10 ; tens++)
		{

			for (ones = 0; ones < 10; ones++)
			{
				if ((hundreds != tens) &&
					(hundreds != ones) &&
					(tens != ones) &&
					(ones != 0) &&
					(hundreds - tens) < 0 &&
					(hundreds - ones) < 0 &&
					(tens - ones) < 0)
				{
					putchar('0' + hundreds);
					putchar('0' + tens);
					putchar('0' + ones);
					if (hundreds != 7 || tens != 8 || ones != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

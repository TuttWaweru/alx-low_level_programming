#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int tens1, ones1, tens2, ones2;

	for (tens1 = 0; tens1 < 10; tens1++)
	{
		for (ones1 = 0; ones1 < 10; ones1++)
		{
			for (tens2 = 0; tens2 < 10; tens2++)
			{
				for (ones2 = 0; ones2 < 10; ones2++)
				{
					int num1 = tens1 * 10 + ones1;
					int num2 = tens2 * 10 + ones2;

					if (num1 < num2 && !(num1 == 0 && num2 == 0))
					{
						putchar('0' + tens1);
						putchar('0' + ones1);
						putchar(' ');
						putchar('0' + tens2);
						putchar('0' + ones2);

						if (num1 != 99 || num2 != 99)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}


#include <stdio.h>

/**
 * main - prints numbers between 0 and 9 and letters between A to F
 * Return: Always 0 (Success)
 */
{
	int main(void)

	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

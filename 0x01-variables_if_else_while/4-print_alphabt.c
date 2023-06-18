#include <stdio.h>

/**
 *main - Print lowercase letters using putchar
 *
 *Description: Print lowercase letters using only putchar, except q and e
 *Return: 0
*/
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == 101 || i == 113)
			i++;
		putchar(i);
	}
	putchar('\n');
	return (0);
}

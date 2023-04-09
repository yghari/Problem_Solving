#include <stdio.h>
int main()
{
	int a = 0;
	int b = 1;
	int c = 2;

	while (a < 8)
	{
		while (b < 9)
		{
			while (c < 10 )
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
				if (a != 7 || b != 8 || c != 9 )
				{
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			c = b + 2;
			b++;
		}
		b = a + 1;
		a++;

	}
	putchar('\n');
	return (0);
}

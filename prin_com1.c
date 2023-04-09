#include <stdio.h>

int main()
{
	int a;
	int b;

	a = 0;
	b = 1;
	while (a < 9)
	{
		while (b < 10)
		{
			if (a != b)
			{
				putchar(a + 48);
				putchar(b + 48);
				if (a != 8 || b != 9 )
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
			printf("b = >> %d\n", b);
		}
		b = a + 1;
		a++;
		printf("a = >> %d\n",a);
	}
	putchar('\n');
	return 0;
}

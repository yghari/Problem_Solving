#include <stdio.h>


int main(void)
{
	unsigned long factor = 2;
	unsigned long our = 345;

	while (factor < our)
	{
		if  (our % factor == 0)
		{
			our = our / factor;
			factor = 2;
		}
		else
			factor++;
	}
	 printf("%ld\n", our);
}

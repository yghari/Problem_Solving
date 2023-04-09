#include "stdio.h"

/**
 * *cap_string- capitalizes all words of a string.
 * @str: pointer on the sring
 * Return: return the str
 */

char *cap_string(char *str)
{
	int i;
  int a;
     
	i = 0;
      	a = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
	}
	while (str[i])
	{
		if (str[i] == 32 || str[i] == 9 || str[i] == 10 || str[i] == 44
          || str[i] == 59 || str[i] == 46 || str[i] == 33 || str[i] == 63 
          || str[i] == 34 || str[i] == 40 || str[i] == 42 || str[i] == 123
          || str[i] == 125 )
		{
               i++;
              a = 1;
		}
    if ((str[i] >= 'A' && str[i] <= 'Z'))
    {
      a = 0;
    }
    if ((str[i - 1] >= '0' && str[i - 1] <= '9'))
    {
      a = 0;
    }
      if (a == 1 && (str[i] >= 'a' && str[i] <= 'z'))
      {
            str[i] = str[i] - 32;
        a = 0;
      }
		i++;
	}
	return (str);
}

int main(void)
{
    char str[] = "expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}

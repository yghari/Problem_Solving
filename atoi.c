#include <stdio.h>

int	_atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int nb = 0;

	while (!((s[i] >= '0') && (s[i] <= '9')) && s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	//printf("%d\n", i);

	while (s[i] >= '0' && s[i] <= '9')
	{
		nb = nb * 10 + (s[i] - '0');
		i++;
    
	}
	return (nb * sign);

}

int main()
{
	printf("%d\n",_atoi("---a-s-v65 hj89 hd"));
}
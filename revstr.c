#include <stdio.h>

int main()
{
	char s[100];
	int i = 0;

	printf("enter a  string : \n");
	
	fgets(s, sizeof(s), stdin);
	
	printf("%s\n", s);

	while (s[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		printf("%c", s[i] );
		i--;
	}
	printf("\n");


}

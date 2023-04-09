#include <stdio.h>
//2,147,483,647
char *_atoi(char *s)
{
  int i = 0;
  int j = 0;
  char store[1000] = {0};

    while (!(s[i] >= '0' && s[i] <= '9') && s[i] != '\0')
    {
	i++;
    }
    while (s[i] >= '0' && s[i] <= '9' && s[i])
    {
	store[j] = s[i];
	i++;
	j++;
    }
    store[j + 1] = '\0';
    printf("%c\n",store[0]);
    printf("%c\n", store[1]);
 printf("%c\n", store[2]); 
  return store;
}

int main()
{
	printf("%s\n",_atoi("asv65 hj89 hd"));
	printf("hello");
	}
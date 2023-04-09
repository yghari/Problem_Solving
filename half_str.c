#include "main.h"
#include <stdio.h>

/**
 * puts_half - descrip
 * @str: para
 */

void puts_half(char *str)
{
    int len = 0;
    int n = 0;
    int i = 0;

    while (str[len] != '\0')
        len++;
    printf("%d\n", len);
    if (len % 2 == 0)
        n = len / 2;
    else
        n = (len + 1) / 2;
    for (i = n; i < len; i++)
        _putchar(str[i]);
    _putchar('\n');
}

int main(void)
{
    char *str1;
    
    printf("------------------");
    str1 = "123456789";
    puts_half(str1);
    printf("------------------");
    printf("------------------");
    puts_half("0123456789");
    printf("------------------");
    return (0);
}

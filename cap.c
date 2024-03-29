#include <ctype.h>
#include <stdio.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @str: Pointer to a string.
 *
 * Return: Pointer to the modified string.
 */

char *cap_string(char *s)
{
    int i;

    i = 0;
    if (s[i] >= 'a' && s[i] <= 'z')
    {
        s[i] -= 32;
    }
    while (s[i])
    {
        if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ','
            || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?'
            || s[i] == '\"' || s[i] == '(' || s[i] == ')' || s[i] == '{'
            || s[i] == '}')
        {
            if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
                s[i + 1] -= 'a' - 'A';
        }

        i++;
    }
    return (s);
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

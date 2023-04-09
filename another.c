#include <stdio.h>
int main(void)
{
    char string[100];
    int n1;
    int n2;
    int temp;
    printf("Please enter a string:");
    
    fgets(string, sizeof(string), stdin);
    printf("Please enter n1 and n2:");
    scanf("%d%d",&n1,&n2);
    temp = string[n1 - 1];
    string[n1 - 1] = string[n2 - 1];
    string[n2 - 1] = temp;
    printf("new string:%s\n", string);
}

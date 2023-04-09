#include <stdio.h>
int main(void){
    char string[10];
    char n1;
    char n2;
    char temp;
    printf("Please enter a string:");
    scanf("%s\n",string);
    printf("Please enter n1:");
    scanf("%c\n",&n1);
    printf("Please enter n2");
    scanf("%c\n",&n2);
    temp = n1;
    n1 = n2;
    n2 = temp;
    printf("string");
    printf("%c\n", n1);
    printf("%c\n", n2);
    printf("%c\n",temp);
 }

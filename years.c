#include <stdio.h>

int main()
{
     int years;
     int days;
     int fweeks;
     int weeks;
     int input;

     printf("enter the number you want to convert : \n");
     scanf("%d", &input);
     printf("your input is : %d\n", input);

     years = input / 365;
     fweeks = input - (years * 365);
     weeks = fweeks / 7;
     days = input - (years * 365) - (weeks * 7);

     printf("years : %d\n",years);
     printf("weeks : %d\n", weeks);
     printf("days : %d\n", days);
}
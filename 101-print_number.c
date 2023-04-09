#include <stdio.h>

void print_number(int n)
{
     int f;
     int l;

     f = 0;
     l = 0;

     if (n < 0)
     {
          putchar('-');
          n = -n; 
     }
     if (n / 10)
          print_number(n / 10);
     putchar(n % 10 + 48);
}

int main()
{
     print_number(5228);
     printf("\n");
     return 0;
}
#include <stdio.h>
#include <stdlib.h>

//25, 10, 5, 2, and 1 cent
//./change 10 >> 1
// ./change 100 >> 4
int main(int ac, char **av)
{
     int i, cents, count;

     i = 0;
     count = 0;
     if (ac != 2)
     {
          printf("Error\n");
          return (1);
     }
     cents = atoi(av[1]);
     if (cents <= 0)
     {
          printf ("0\n");
          return (0);
     }
     while (cents > 0)
     {
          if (cents >= 25)
          {
               cents = cents - 25;
               count++;
          }
          else if (cents >= 10)
          {
               cents = cents - 10;
               count++;
          }
          else if (cents >= 5)
          {
               cents = cents - 5;
               count++;
          }
          else if (cents >= 2)
          {
               cents = cents - 2;
               count++;
          }
          else if (cents >= 1)
          {
               cents = cents - 1;
               count++;
          }
     }
     printf ("%d\n", count);
     return (0);
}
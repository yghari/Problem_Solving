#include <stdio.h>
#include <unistd.h>
/*
.........#$
........##$
.......###$
......####$
.....#####$
....######$
...#######$
..########$
.#########$
##########$*/
void print(int size)
{
     int a;
     int b;
     int la;

     a = 1;
     b = size - 1;
     la = 1;

     if (size > 0)
     {
          while (a < size)
          {
               while (b)
               {
                    putchar(' ');
                    b--;
               }
               while (la )
               {
                    putchar('$');
                    la--;
               }
               putchar('\n');
               a++;
               b = size - a;
               la = a;
          }
          printf("la = %d\n", la);
          printf("a = %d\n", a);
          printf("b = %d\n", b);
     }
}
int main()
{
     print(10);
     //print(10);
     return 0;
}
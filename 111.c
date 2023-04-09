include <stdio.h>
#include <string.h>

int main()
{
  char a[]= "255";
  char a2[] = "20000000006613";
  char new_a[sizeof(a2)] = {0};
  char new_a2[sizeof(a)] = {0};
  int i , j ,arr1,arr2,diff,tmp;
  
  arr1 = i = strlen(a);
  arr2 = j = strlen(a2);
  
  printf("%ld\n",sizeof(new_a));
  if (i < j)
  {
    diff = j - i;
    j = arr2-1;
    while (j >= diff)
    {
      new_a[j] = a[j-diff];
      j--;
    }
    j = diff-1;
    while (j >= 0)
    {
      new_a[j] = '0';
      j--;
    }
    new_a[arr2] = '\0';
  }
  else
  {
    diff = i - j;
    i = arr1-1;
    while (i >= diff)
    {
      new_a2[i] = a2[i-diff];
      i--;
    }
    i = diff-1;
    while (i >= 0)
    {
      new_a2[i] = '0';
      i--;
    }
    new_a2[arr1] = '\0';
  }
  printf("array 1 :%s\n",new_a);
  printf("array 2 :%s\n",new_a2);
  
  return 0;
}
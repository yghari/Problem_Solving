/*Write a C program that takes a list of integers as command line arguments (using argc/argv), stores the integers in an array (using pointers), and then sorts the array using a recursive implementation of the quicksort algorithm. Your program should then print the sorted array to the console.

Here are the steps to complete the exercise:

Create a C program that accepts a list of integers as command line arguments using argc/argv.

Use pointers to store the integers in an array.

Implement a quicksort algorithm using recursion to sort the array.

Print the sorted array to the console using pointers.

Compile and run the program to verify that it works correctly.


Input:

./quicksort 5 2 7 1 8 3
Output:

1 2 3 5 7 8 */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int l, int h)
{
    int x = arr[h];
    int i = (l - 1);
  
    for (int j = l; j <= h - 1; j++) {
        if (arr[j] <= x) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[h]);
    return (i + 1);
}

void quickSort(int A[], int l, int h)
{
    if (l < h) {
        int p = partition(A, l, h);
        quickSort(A, l, p - 1);
        quickSort(A, p + 1, h);
    }
}

int main(int ac, char *av[])
{
	int i = 1;
	int j = 0;
	int iarr[100];
	int *piarr;


	if (ac <= 1)
	{
		printf("Error : enter more parametrs\n");
		return (0);
	}
	while (i < ac )
	{
		 iarr[i - 1] = atoi(av[i]);
		 i++;
	}
	piarr = iarr;
	quickSort(iarr, 0, i - 2);
	i = 0;
	while (i < ac - 1)
	{
	 	printf ("%d\n",*(iarr + i));
	 	i++;
	 }
	// printf("hello");
	return (0);
}

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main ()
{
	char array[] = "Hello you!";
	char *parr ;

	parr = array;

	printf("the content (value) of array is : %s \n",array);
	printf("the address of array is : %p \n",&array);
	printf("------------------------------------------>\n");
	printf("the content (value) in the pointer parr is : %p \n",parr);
	printf("the address of the pointer parr is : %p \n", &parr);
	printf("------------------------------------------>\n");
	printf("The content of content of parr is %c\n", *parr); /* Dereference */	
	printf("The content of address of array  is %s\n", *(&array)); 

	
	printf("------------------------------------------>\n");
	printf("------------------------------------------>\n");
	printf("------------------------------------------>\n");
	
	int digit = 55;
	int *pint = &digit;

	printf("The address of digit             is %p\n", &digit);
	printf("The content (value) of digit             is %d\n", digit);
	printf("------------------------------------------>\n");
	printf("The content (value) of pint            is %p\n", pint);
	printf("The address of pint            is %p\n", &pint);	
	printf("------------------------------------------>\n");
	printf("The content of content of pint is %d\n", *pint); /* Dereference */
	printf("The content of address of digit  is %d\n", *(&digit)); 


}

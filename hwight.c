#include <stdio.h>
#include <stdlib.h>

int main()
{
	int height;
	int width;
	int area;
	int primeter;
	int option;

	printf("pleas enter the height from 0 to n:\n");
	scanf("%d",&height);
	printf("pleas enter the width from 0 to n :\n");
	scanf("%d",&width);
	printf("pleas enter 1 for the area or 2 for the perimeter or 3 for both or 4 to quit\n");
	scanf("%d", &option);
	area = width * height ;
	if (option == 1)
	{
		printf("area is : %d \n", (width * height));
		exit (0);
	}
	else if (option == 2)
	{
		printf("perimeter is : %d \n", ((width*2) + (height * 2)));
		exit (0);
	}
	else if (option == 3)
	{
		printf("area is : %d \n", (width * height));
		printf("perimeter is : %d \n", ((width*2) + (height * 2)));
		exit (0) ;
	}
	exit (0);

}

#include <stdio.h>
#include <stdlib.h>
int main()
{
	char name[50];
	int d;
	int m;
	int y;
	int phone;
	
	printf("please enter your full name: ");
	scanf("%s", name);
	printf("please enter your Date of birth (day month year):\n");
	if ((scanf("%d %d %d", &d, &m, &y)) == 3)
	{
		printf("enter ur phone nunmber ");
		scanf("%d", &phone);
	}
	else {
                printf("error : pleas enter you day month year\n ");
		exit (0);
        }

	printf("Full Name: %s\n", name);
	printf("DOB: %d-%d-%d\n", d,m, y);
	printf("Mobile:%d\n", phone);
}


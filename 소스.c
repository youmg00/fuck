#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct person
{
	char name[20];
	char phone[20];
};

int main()
{
	struct person arr[3];
	int i;
	char search[20];
	
	for (i = 0; i < 3; i++)
	{
		printf("ют╥б: ");
		scanf("%s %s", arr[i].name, arr[i].phone);
	}




	for (i = 0; i < 3; i++)
	{
		if (!strcmp(search, arr[i].name))
			printf("%s %s \n", arr[i].name, arr[i].phone);
	}

	for (i = 0; i < 3; i++)
	{
		printf("%s %s \n", arr[i].name, arr[i].phone);
	}
}
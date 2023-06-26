#include <stdio.h>
void main()
{
	int n;
	int i, a[n];
	printf("Enter size of array:");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("\nEnter Element %d:", i + 1);

		scanf("%d", &a[i]);
	}

	printf("\n-------------------------------------------------");

	for (i = 0; i < n; i++)
	{
		printf("\na[%d] = %d\n", i, a[i]);
	}

	printf("\n-------------------------------------------------");

	int sv, flag = 1, si; // sv=Value to be searched,si=index of searched elt

	printf("\nEnter element you want to search for:");
	scanf("%d", &sv);

	for (i = 0; i < n; i++)

	{
		if (a[i] == sv)
		{
			flag = 1;
			si = i;
			break;
		}
		else
		{
			flag++;
		}
	}

	if (flag == 1)
	{
		printf("Element found !! at index --> a[%d] \n", si);

		printf("\n-------------------------------------------------");

	}
	else if (flag > 1)
	{
		printf("Element not found !!\n");

		printf("\n-------------------------------------------------");

	}
}

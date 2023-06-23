#include<stdio.h>

void main()
{
	int a[5]={2,40,4,28,9};
	int temp;
	
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("------------------------------Sorted Array----------------------------");
	printf("\n");
	printf("[");
	for(int n=0;n<5;n++)
	{
		printf("'%d' ",a[n]);
	}
	printf("]");
	printf("\n");
}

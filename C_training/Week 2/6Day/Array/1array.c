#include<stdio.h>
void main()
{
//declaring variable
//int a[5];
//Assigning value to variable
//a=10;



int i,marks[5];   //---> Allocates 5 memory (even if we dont need all of them)

for(i=0;i<5;i++)
{
	printf("\nEnter Element %d:",i+1);
	
	scanf("%d",&marks[i]);
}
printf("\n-------------------------------------------------");
for(i=0;i<5;i++)
{
	printf("\nElement %d is :%d\n",i+1,marks[i]);
}

// For Maximum Number in Array

int max=marks[0];
int min=marks[0];

for(i=0;i<5;i++)
{
	if(marks[i]>max)
	{
		max=marks[i];
	}
	
	if(marks[i]<min)
	{
		min=marks[i];
	}
	
}

float sum=0;

for(i=0;i<5;i++)
{
	sum=sum+marks[i];
}
printf("\n-------------------------------------------------");
printf("\nMaximum element in the Array is:%d\n",max);
printf("\n-------------------------------------------------");
printf("\nMinimum element in the Array is:%d\n",min);
printf("\n-------------------------------------------------");
printf("\nAverage of all the elemrnts in the Array is:%.3f\n",sum/5);
}

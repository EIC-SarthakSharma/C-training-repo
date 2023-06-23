#include<stdio.h>
void main()
{


int n,eq;

int i,a[n];

printf("Enter size of array:");
scanf("%d",&n);
printf("\n");

for(i=0;i<n;i++)
{
	printf("Enter Element %d:",i+1);
	
	scanf("%d",&a[i]);
}


printf("\n-------------Displaying the Array elements------------------\n");


for(i=0;i<n;i++)
{
	printf("a[%d] = %d\n",i,a[i]);
}

printf("\n-------------------------------\n");

int m;

m=n;

int tmp=a[m]; 

for(i=0;i<m;i++)
{ 	
	a[i+1]=a[i];
	
	tmp=a[0];
	
}

for(i=0;i<m;i++)

{
	printf("a[%d] = %d\n",i,a[i]);
}

}

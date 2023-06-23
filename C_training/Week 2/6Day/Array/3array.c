#include<stdio.h>
void main()
{
int n,m;
int i,a[n],x[m];

printf("Enter size of array:");
scanf("%d",&n);

for(i=0;i<n;i++)
{
	printf("\nEnter Element %d:",i+1);
	
	scanf("%d",&a[i]);
}


printf("\n-------------------------------------------------");


for(i=0;i<n;i++)
{
	printf("\na[%d] = %d\n",i,a[i]);
}


printf("\n----------Copying the elements from a[n] -- to -- x[n]-----------");

m=n;
for(i=0;i<m;i++)
{
	x[i]=a[i];
	
}


printf("\nThe Elements are now copied to x[n]");


for(i=0;i<m;i++)
{
	printf("\nx[%d] = %d\n",i,x[i]);
}
}

#include<stdio.h>
void main()
{


int n,m;

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


m=n;

printf("\n-------------Displaying the Reversed Array elements------------------\n");

for(i=m;i>0;i--)
{
	printf("a[%d] = %d\n",i-1,a[i-1]);
}

}

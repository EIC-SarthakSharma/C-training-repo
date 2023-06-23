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

int m,flg=1,ind;

m=n;

for(i=0;i<m;i++)
{
	int lsum=0,rsum=0;
	
	for(int j=0;j<i;j++)
	{
		lsum=lsum+a[j];
	}
	for(int k=i+1;k<m;k++)
	{
		rsum=rsum+a[k];
	}
	
	if(lsum==rsum)
	{
		flg=1;
		ind=i;
		break;
	}
	else
	{
		flg++;
	}
}


if(flg==1)
{
	printf("Equilibrum Found at a[%d] element\n",ind);
}

else
{
	printf("Equilibrum Not Found\n");
}
}

#include<stdio.h>
void main()
{


int n;

printf("Enter size of array a:");
scanf("%d",&n);

int i,a[n];


printf("\n");

for(i=0;i<n;i++)
{
	printf("Enter Element %d:",i+1);
	
	scanf("%d",&a[i]);
}


printf("\n-------------Displaying the 'a' Array elements------------------\n");


for(i=0;i<n;i++)
{
	printf("a[%d] = %d\n",i,a[i]);
}

printf("\n-------------------------------\n");

int m;

printf("Enter size of array x :");
scanf("%d",&m);

int j,x[m];


printf("\n");

for(j=0;j<m;j++)
{
	printf("Enter Element %d:",j+1);
	
	scanf("%d",&x[i]);
}


printf("\n-------------Displaying the 'x' Array elements------------------\n");


for(j=0;j<n;j++)
{
	printf("x[%d] = %d\n",j,a[j]);
}

printf("\n-------------------------------\n");

if(m!=n)
{
	printf("Arrays are Not equal");
}
else if(m==n)
{
	int flag=1;
	for(i=0;i<n;i++)
	{

		if(a[i]==x[i])
		{
			flag=1;
			
		}
		else
		{
			flag++;
		}
	}

	if(flag==1)
	{
		printf("Arrays are Equal\n");
	}
	else if(flag>1)
	{
		printf("Arrays are not equal\n");
	}
}

}

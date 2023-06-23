#include<stdio.h>
void main()
{


int n,p=0,ng=0,e=0,o=0,z=0;

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

printf("\n-------------Counting Negative,Positive,Zero,Even,Odd elements in the Array elements------------------\n");

for(i=0;i<n;i++)

{
	if(a[i]>0)
	{
		p++;
		
	}
	
	if(a[i]<0)
	{
		ng++;
		
	}
	
	if(a[i]==0)
	{
		z++;
		
	}
	
	if(a[i]%2==0)
	{
		e++;
		
	}
	
	if(a[i]%2!=0)
	{
		o++;
		
	}
}

printf("Even Numbers: %d out of %d\n",e,n);
printf("Odd Numbers: %d out of %d\n",o,n);
printf("Zeroes: %d out of %d\n",z,n);
printf("Positive Numbers: %d out of %d\n",p,n);
printf("Negatie Numbers: %d out of %d\n",ng,n);

}

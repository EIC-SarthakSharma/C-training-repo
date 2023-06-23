#include<stdio.h>
void main()
{
	int i=1,n;
    printf("Enter no. after which consecuttive odd nd evens are to be printed :");
    scanf("%d",&n);
    for(i=n;i<n+20;i+=1)
    {
        if(i%2==0)
        {
            printf("%d is even\n",i);
        }
	}
	for(i=n;i<n+20;i+=1)
	{	
        if(i%2!=0)
        {
            printf("%d is odd\n",i);
        }
    }
}

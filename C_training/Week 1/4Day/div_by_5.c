#include<stdio.h>
void main()
{
	int i,n;
    printf("Enter no. upto which you want to print num divisible by 5 :");
    scanf("%d",&n);
    for(i=1;i<=n;i+=1)
    {
        if(i%5==0)
        {
            printf("%d is divisible by 5\n",i);
        }
    }
}

#include<stdio.h>
void main()
{
	int i=1,n;
    printf("Enter no. upto which squares are to be printed:");
     scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",i*i);
        i+=1;
        
    }
}

#include<stdio.h>
void main()
{
	int i,n,num,pe=0,po=0,ne=0,no=0,zro=0;
    printf("how many no. you wat to input :");
    scanf("%d",&n);
    for(i=1;i<=n;i+=1)
    {
        printf("Enter no. %d\n",i);
        scanf("%d",num);
    }
    
    while(num<0 && num%2!=0)
    {
        printf("%d is negative nd odd",num);
        no++;
    }
    while(num>0 && num%2!=0)
    {
        printf("%d is positive nd odd",num);
        po++;
    }  
    while(num>0 && num%2==0)
    {
        printf("%d is positive nd even",num);
        pe++;
    }
    while(num<0 && num%2==0)
    {
        printf("%d is positive nd even",num);
        ne++;
    }
    printf("");
}

#include <stdio.h>

void main()
{
    int num,n1,n2,n3,n4,n5,c,ndg;
    printf("\nEnter 5 digit number: ");
    scanf("%d",&num);
    n1=num%10;
    n1+=1;
    num=num/10;
    n2=num%10;
    n2+=1;
    num=num/10;
    n3=num%10;
    n3+=1;
    num=num/10;
    n4=num%10;
    n4+=1;
    num=num/10;
    n5=num%10;
    n5+=1;
    num=num/10;
    
    ndg=n5*10000+n4*1000+n3*100+n2*10+n1;
    
    printf("%d",ndg);
}


#include <stdio.h>

void main()
{
    int num,sum;
    printf("\nEnter 4 digit number: ");
    scanf("%d",&num);
    sum=num%10;
    num=num/10;
    
    num=num/10;
    
    num=num/10;
    sum+=num%10;
    
    
    
    printf("%d",sum);
}


			OR
		
#include <stdio.h>
				
/*void main()
{
    int num,n1,n2,n3,n4,sum;
    printf("\nEnter 4 digit number: ");
    scanf("%d",&num);
    n1=num%10;
    num=num/10;
    n2=num%10;
    num=num/10;
    n3=num%10;
    num=num/10;
    n4=num%10;
    num=num/10;
    
    sum=n1+n4;
    printf("%d",sum);
}*/

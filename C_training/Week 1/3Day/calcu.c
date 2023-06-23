#include<stdio.h>
void main()
{
int n1,n2,ans,choice;
printf("Enter First number:");
scanf("%d",&n1);

printf("Enter Second number:");
scanf("%d",&n2);

printf("Press 1 for Addition.\nPress 2 for Subtraction.\nPress 3oice for Multiplication.\nPress 4 for Division.\nNow Enter Choice:");
scanf("%d",&choice);

switch(choice)
{
case 1:ans=n1+n2;
printf("Sum of n1 and n2 is: %d\n",ans);
break;

case 2:ans=n1-n2;
printf("diff. of n1 and n2 is: %d\n",ans);
break;

case 3:ans=n1*n2;
printf("product of n1 and n2 is: %d\n",ans);
break;

case 4:ans=n1/n2;
printf("Division of n1 and n2 is: %d\n",ans);
break;

default: printf("Enter Valid Choice");

}
}

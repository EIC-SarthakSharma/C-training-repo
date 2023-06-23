#include <stdio.h>

int main()
{
    int sal,tax;
    printf("Enter the salary: ");
    scanf("%d",&sal);
    
    if(sal>50000)
    {
        tax=0.1*sal;
        printf("The Tax deduction on '%d' rupees salary is : %d \n",sal,tax);
    }
    else
    {
        tax=0.05*sal;
        printf("The Tax deduction on '%d' rupees salary is : %d \n",sal,tax);
    }
}


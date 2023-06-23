#include <stdio.h>
void main()
{
    double BS;
    float GS,DA,HRA;
    printf("Enter Basic Salary:");
    scanf("%lf",&BS);

    DA=(40*BS)/100;
    HRA=(20*BS)/100;
    
    GS=BS+HRA+DA;
    
    printf("The Gross Salary is : %lf ",GS);
}

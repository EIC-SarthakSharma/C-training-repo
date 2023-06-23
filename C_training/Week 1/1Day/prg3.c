#include <stdio.h>
void main()
{
    float s1,s2,s3,s4,s5,total,agg,prc;
    printf("Enter marks in Sub 1 : ");
    scanf("%f",&s1);
    printf("\nEnter marks in Sub 2 : ");
    scanf("%f",&s2);
    printf("\nEnter marks in Sub 3 : ");
    scanf("%f",&s3);
    printf("\nEnter marks in Sub 4 : ");
    scanf("%f",&s4);
    printf("\nEnter marks in Sub 5 : ");
    scanf("%f",&s5);
    
    total = s1+s2+s3+s4+s5;
    agg=total/5;
    prc=(total*100)/500;
    
    printf("\nAggregate Marks : %f",agg);
    printf("\nPercentage of Marks : %f ",prc);
}

#include <stdio.h>

void main()
{
    float cel,far;
    printf("\nEnter temp in far : ");
    scanf("%f",&far);
    cel = ((far-32)*5)/9;
    printf("\nEnter temp in cel : %f",cel);
}


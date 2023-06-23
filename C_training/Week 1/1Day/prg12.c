#include <stdio.h>

void main()
{
    float ft;
    float mtr,cm,inch;
    
    printf("Enter height in ft:");
    scanf("%f",&ft);
    
    
    mtr=0.305*ft;
    inch=12*ft;
    cm=30.48*ft;
    
    printf("\nHeight in meters : %f meters",mtr);
    printf("\nHeight in inch : %f inches",inch);
    printf("\nHeight in centimeters : %f centimeters",cm);
      
}


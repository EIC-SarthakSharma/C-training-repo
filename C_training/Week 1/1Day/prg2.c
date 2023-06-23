#include <stdio.h>
void main()
{
    long km;
    float inch,ft,mtr,cm;
    
    printf("Enter dist in km:");
    scanf("%ld",&km);
    
    ft=3280.8*km;
    mtr=1000*1000;
    inch=39370.1*km;
    cm=100000*km;
    
    printf("\nDistance in meters : %f meters",mtr);
    printf("\nDistance in feet : %f feet",ft);
    printf("\nDistance in inch : %f inches",inch);
    printf("\nDistance in centimeters : %f centimeters",cm);
    
}

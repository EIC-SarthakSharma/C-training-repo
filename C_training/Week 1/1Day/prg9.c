#include <stdio.h>

void main()
{
    int hun,fif,tn,tot;
    
    printf("\nTotal amount:");
    scanf("%d",&tot);
    
    hun=tot/100;
    tot=tot%100;
    
    fif=tot/50;
    tot=tot%50;
    
    tn=tot/10;
    tot=tot%10;
    
    printf("\nThe denominations of 100, 50, 10 are respectively : %d %d %d",hun,fif,tn);
    
}

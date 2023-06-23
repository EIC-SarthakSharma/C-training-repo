#include <stdio.h>

void main()
{
    int yr,mnt,wk,tot;
    
    printf("\nTotal days:");
    scanf("%d",&tot);
    
    yr=tot/365;
    tot=tot%365;
    
    mnt=tot/30;
    tot=tot%30;
    
    wk=tot/7;
    tot=tot%7;
    
    printf("\nThe Year , Month and weeks are respectively : %d %d %d",tot,yr,mnt,wk);
}


#include <stdio.h>

void main()

{
    int cpi,dis,qty,tot;
    printf("Cost per item: ");
    scanf("%d",&cpi);
    
    printf("qty: ");
    scanf("%d",&qty);
    
    tot=cpi*qty;
    
    if(qty>1000)
    {
        dis=0.1*tot;
        tot=tot-dis;
        printf("Your Total Bill after %d Ruppes discount is : %d Rupees\n",dis,tot);
    }
    
    else
    {
        printf("Your total bill is : %d Rupees \nYou aren't eligible for discount",tot);
    }
}

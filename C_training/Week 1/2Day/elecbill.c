#include <stdio.h>

void main()

{
    int phs=0,toc=0,nu=0;
    float tot_bill=0,sr_ch=0,add_ch=0,pt=0,bp=0;
    
    printf("Enter 1 for Domestic\nEnter 2 for Commercial\nEnter Your Choice:");
    scanf("%d",&toc);
    
    if(toc==1 || toc==2)
    {
        if(toc == 1)
        {
            printf("Enter 1 for Single Phase\nEnter 3 for 3 Phase\nEnter Your Choice:");
            scanf("%d",&phs);
        
            if(phs==1 || phs==3)
            {
                if(phs==1)
                {
                    printf("Enter number of units:");
                    scanf("%d",&nu);
        
                    if(nu>0 && nu<=50)
                    {
                        tot_bill=20 + 10 + nu*1.45 ;
                        printf("Your total Bill is %f Rupees",tot_bill);
                    
                    }
                    if(nu>50 && nu<=100)
                    {
                        nu=nu-50;
                        tot_bill=20 + 10 + nu*2.85 + 72.5; 
                        printf("Your total Bill is %f Rupees",tot_bill);
                    }
                    if(nu>100 && nu<=200)
                    {
                        
                        nu=nu-100;
                        tot_bill=20 + 10 + nu*3.95 + 72.5 + 142.5; 
                        printf("Your total Bill is %f Rupees",tot_bill); 
                    }
                    if(nu>200)
                    {
                        if(nu*0.06<20)
                        {
                            nu=nu-200;
                            tot_bill=10 + 20 + nu*4.5 + 72.5+ 142.5 + 395;
                            
                        }
                        if(nu*0.06>20)
                        {
                            pt=nu*0.06;
                            nu=nu-200;
                            tot_bill=10 + pt + nu*4.5 + 72.5+ 142.5 + 395;
                        }
                    }
                }
                if(phs==3)
                {
                    printf("Enter number of units:");
                    scanf("%d",&nu);
                    if(nu>0 && nu<=50)
                    {
                        tot_bill=50 + 10 + nu*1.45 ;
                        printf("Your total Bill is %f Rupees",tot_bill);
                    
                    }
                    if(nu>50 && nu<=100)
                    {
                        nu=nu-50;
                        tot_bill=50 + 10 + nu*2.85 + 72.5; 
                        printf("Your total Bill is %f Rupees",tot_bill);
                    }
                    if(nu>100 && nu<=200)
                    {
                        
                        nu=nu-100;
                        tot_bill=50 + 10 + nu*3.95 + 72.5 + 142.5; 
                        printf("Your total Bill is %f Rupees",tot_bill); 
                    }
                    if(nu>200)
                    {
                        if(nu*0.06<50)
                        {
                            nu=nu-200;
                            tot_bill=10 + 50 + nu*4.5 + 72.5+ 142.5 + 395;
                            printf("Your total Bill is %f Rupees",tot_bill);
                            
                        }
                        if(nu*0.06>50)
                        {
                            pt=nu*0.06;
                            nu=nu-200;
                            tot_bill=10 + pt + nu*4.5 + 72.5+ 142.5 + 395;
                            printf("Your total Bill is %f Rupees",tot_bill);
                        }
                    }
                }
            }
        
        else
        {
            printf("Enter Valid Choice!");
        }
    }
    else
        {
            printf("Enter Valid Choice!");
        }
    
    if(toc == 2)
        {
            printf("Enter 1 for Single Phase\nEnter 3 for 3 Phase\nEnter Your Choice:");
            scanf("%d",&phs);
        
            if(phs==1 || phs==3)
            {
                if(phs==1)
                {
                    printf("Enter number of units:");
                    scanf("%d",&nu);
                    
                    if(nu>0 && nu<=100)
                    {
                        tot_bill=50 + nu*3.95 +20 ;
                        printf("Your total Bill is %f Rupees",tot_bill);
                    
                    }
                    if(nu>100)
                    {
                        if(nu*0.06<=50)
                        {
                            tot_bill=50 + nu*7 +20 + 395 ;
                            printf("Your total Bill is %f Rupees",tot_bill);
                        }
                        if(nu*0.06>50)
                        {
                            pt=nu*0.06;
                            nu=nu-100;
                            tot_bill=pt + nu*7 +20  + 395;
                            printf("Your total Bill is %f Rupees",tot_bill);
                        }
                    }
                    
                }
                if(phs==3)
                {
                    printf("Enter number of units:");
                    scanf("%d",&nu);
                    
                    if(nu>0 && nu<=100)
                    {
                        tot_bill=100 + nu*3.95 +20 ;
                        printf("Your total Bill is %f Rupees",tot_bill);
                    
                    }
                    if(nu>100)
                    {
                        if(nu*0.06<=100)
                        {
                            tot_bill=100 + nu*7 +20 + 395 ;
                            printf("Your total Bill is %f Rupees",tot_bill);
                        }
                        if(nu*0.06>100)
                        {
                            pt=nu*0.06;
                            nu=nu-100;
                            tot_bill=pt + nu*7 +20  + 395;
                            printf("Your total Bill is %f Rupees",tot_bill);
                        }
                    }
                    
                }
            }
            else
        {
            printf("Enter Valid Choice!");
        }
        }
        
}
}

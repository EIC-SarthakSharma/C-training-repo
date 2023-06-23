void main()

{
    int brg,piz,snd;
    float dis,tot_brg,tot_piz,tot_snd,gst,tot_gst,tot;
    printf("Qty of Burger: ");
    scanf("%d",&brg);
    
    printf("Qty of Pizza: ");
    scanf("%d",&piz);
    
    printf("Qty of Sandwich: ");
    scanf("%d",&snd);
    
    tot_brg=brg*150;
    tot_piz=piz*300;
    tot_snd=snd*100;
    
    if(brg>5)
    {
        dis=0.1*tot_brg;
        tot_brg=tot_brg-dis;
        
    }
    
    if(tot_piz>1000)
    {
        dis=0.15*tot_piz;
        tot_piz-=dis;
    }
    
    if(tot_snd>500)
    {
        dis=0.2*tot_snd;
        tot_snd-=dis;
    }
    
    tot=tot_snd+tot_piz+tot_brg;
    gst=0.12*tot;
    
    tot_gst=tot + gst;
    
    printf("Your Total Bill is : %f Rupees after applying GST of %f ruppes\n",tot_gst,gst);
}

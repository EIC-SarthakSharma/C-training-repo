#include<stdio.h>
void main()
{
	int n=1;
	float bp,sp,qt,tbp,tsp,pr,tot=0,prc=0,tprc=0;
	
	while(n)
	{
		printf("Enter BP(per stock):");
		scanf("%f",&bp);
		printf("Enter Qty:");
		scanf("%f",&qt);
		printf("Enter SP(per stock):");
		scanf("%f",&sp);
				
		tbp=qt*bp;
		tsp=sp*qt;
		
		pr=tsp-tbp;
		prc=(pr*100)/tbp;
		
		tot=tot+pr;
		tprc=tprc+prc;
		printf("Want to add more:");
		scanf("%d",&n);
	}
	if(tot<0)
	{
		printf("You are in Loss by %.2f rupees! by %f percent",tot,tprc);
	}
	if(tot>0)
	{
		printf("You are in profit by %.2f rupees!by %.2f percent ",tot,tprc);
	}
	
}

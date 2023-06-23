#include<stdio.h>
void main()
{
	int gs,txi,ts,tax;
	printf("Enter Gross Salary:");
	scanf("%d",&gs);
	
	printf("Enter total Savings:");
	scanf("%d",&ts);
	
		if(ts<=100000)
		{
			txi=gs-ts;
			printf("Taxable Income: %d\n",txi);
		
		
			if(txi<=100000)
			{
				printf("Taxable income is : %d\n",txi);
				tax=0;
				printf("Slab - 0\nTaxable income is :%d and Tax is : %d\n",txi,tax);
			}
			
			if(txi>100000 && txi<=200000)
			{
				printf("Taxable income is : %d\n",txi);
				tax=0.1*txi;
				printf("Slab - 1\nTaxable income is :%d and Tax is : %d\n",txi,tax);
			}
		
			if(txi>200000 && txi<=500000)
			{
				printf("Taxable income is : %d\n",txi);
				txi=txi-200000;
				tax=10000 + + 0.2*txi ;
				printf("Slab - 2\nTax is : %d\n",tax);
			}
		
			if(txi>500000)
			{
				printf("Taxable income is : %d\n",txi);
				txi=txi-500000;
				tax=70000 + 0.3*txi  ;
				printf("Slab - 3\nTax is : %d\n",tax);
			}
		}
	
		if(ts>100000)
		{
			txi=gs-100000;
			printf("Taxable Income: %d\n",txi);
		
			
				if(txi<=100000)
				{
					printf("Taxable income is : %d\n",txi);
					tax=0;
					printf("Slab - 0\nTaxable income is :%d and Tax is : %d\n",txi,tax);
				}
				
				if(txi>100000 && txi<=200000)
				{
					printf("Taxable income is : %d\n",txi);
					tax=0.1*txi;
					printf("Slab - 1\nTaxable income is :%d and Tax is : %d\n",txi,tax);
				}
				
				if(txi>200000 && txi<=500000)
				{
					printf("Taxable income is : %d\n",txi);
					txi=txi-200000;
					tax=10000 + 0.2*txi;
					printf("Slab - 2\nTax is : %d\n",tax);
				}
		
				if(txi>500000)
				{
					printf("Taxable income is : %d\n",txi);
					txi=txi-500000;
					tax=70000 + 0.3*txi  ;
					printf("Slab - 3\nTax is : %d\n",tax);
				}
		}
}	

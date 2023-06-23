#include<stdio.h>
void main()
{
	float slamt;
	int cmsn;
	printf("Enter Sale Amount:");
	scanf("%f",&slamt);
	
	if(slamt<10000)
	{
		printf("No Commision\n");
	}
	if(slamt>=10000 && slamt<25000)
	{
		cmsn=0.08*slamt;
		printf("Commision is :%d\n",cmsn);
	}
	if(slamt==25000)
	{
		cmsn=2000;
		printf("Commision is :%d\n",cmsn);
	}
	if(slamt>25000)
	{
		cmsn=2000 + 0.1*slamt;
		printf("Commision is :%d\n",cmsn);
	}
}

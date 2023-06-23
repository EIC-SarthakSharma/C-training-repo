#include<stdio.h>

void grd(float mrk)
{
	float grade;
	
	if(mrk<50)
	{
		printf("F\n");
	}
	
	if(mrk>50 && mrk<60)
	{
		printf("E\n");
	}
	
	if(mrk>60 && mrk<70)
	{
		printf("D\n");
	}
	
	if(mrk>70 && mrk<80)
	{
		printf("C\n");
	}
	if(mrk>80 && mrk<90)
	{
		printf("B\n");
	}
	
	if(mrk>90 && mrk<=100)
	{
		printf("A\n");
	}
}


void main()
{
	printf("----------------Return Type= Void-----------------\n");
	float mrk;
	printf("Enter marks:");
	scanf("%f",&mrk);
	
	grd(mrk);
}

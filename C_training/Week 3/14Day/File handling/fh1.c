#include<stdio.h>

void main()
{
	FILE *fp1;
	FILE *fp2;
	char new1,new2;
	fp1 = fopen("ab.c","r");
	fp2 = fopen("cp.c","r");
	do
	{
		new1=getc(fp1);
		printf("%c",new1);;
	}
	while(new1 != EOF);
	
	do
	{
		new2=getc(fp2);
		printf("%c",new2);;
	}
	while(new2 != EOF);
	
	//while((new1 !=EOF) || (new2 != EOF))
	//{
		if(new1 == new2)
		{
			printf("Both are same");
		}
		else
		{
			printf("Both are Not same");
		}
//	}
	
	fclose(fp1);
	fclose(fp2);
}

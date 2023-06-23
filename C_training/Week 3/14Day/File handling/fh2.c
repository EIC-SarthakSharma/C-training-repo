#include<stdio.h>

void main()
{
	FILE *fp1;
	FILE *fp2;
	char new;
	fp1 = fopen("ab.c","r");
	fp2 = fopen("cp.c","w");
	do
	{
		new1=getc(fp1);
		puts(new,fp2);
	}
	while(new1 != EOF);
	
	do
	{
		new2=getc(fp1);
		printf("%c",new);;
	}
	while(new != EOF);
	
	fclose(fp1);
	fclose(fp2);
}

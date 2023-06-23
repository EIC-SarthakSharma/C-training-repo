#include<stdio.h>
void main()
{
	int x,y,z;
	
	printf("Enter service charge for First Airline:");
	scanf("%d",&x);
	printf("Enter service charge for Second Airline:");
	scanf("%d",&y);
	printf("Enter service charge for Third Airline:");
	scanf("%d",&z);
	
	if(x<y && x<z)
	{
		printf("FIRST\n");
	}
	if(y<x && y<z)
	{
		printf("SECOND\n");
	}
	if(z<y && z<x)
	{
		printf("THIRD\n");
	}
}

#include<stdio.h>

void square(float num)
{
	float ans;
	ans = num*num;
	printf("Square is %.2f\n",ans);
}

float sqr(float n)

{
	float as;
	as=n*n;
	return as;
	
}

void main()
{
	printf("----------------Return Type= Void-----------------\n");
	float num,n;
	printf("Enter num:");
	scanf("%f",&num);
	
	square(num);
	
	printf("----------------Return Type= float-----------------\n");
	printf("Enter n:");
	scanf("%f",&n);
	
	
	printf("%.3f\n",sqr(n));
}

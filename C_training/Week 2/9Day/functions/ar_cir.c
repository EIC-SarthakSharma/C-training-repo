#include<stdio.h>

void arcir(float r)
{
	printf("Area of circle: %.2f\n",3.14*r*r);
}

void main()
{
	float r;
	scanf("%f",&r);
	arcir(r);
}

#include <stdio.h>
//# include<conio.h>
void greet(char *p)
{
    printf("Jai Shree Ram %s\n",p);
}

void main()
{
    //char x;
    char namm[30];
    fgets(namm);
    //printf("%s",namm);
    greet(namm);
}


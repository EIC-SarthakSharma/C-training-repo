// Online C compiler to run C program online
#include <stdio.h>

void scan(int *p,int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
        //p++;
    }
    
    //printf("\n%d\n\n",*p);
}

void prnt(int *p,int n)
{
    printf("[\t");
    for(int i=0;i<n;i++)
    {
        
        printf("%d",p[i]);
        printf("\t");
        //printf("\n");
        //p++;
    }
    printf("]");
    printf("\nPointer points at :%d\n\n",*p);
}

/*void shifft(int *p,int n)
{
    printf("Enter elt pointer needs to be shifted by to be shifted by");
    p=p+n;
    prnt(*p,n);
}*/

void main() 
{
    int x[10000];
    //int y[1];
    scan(x,4);
    prnt(x,4);
    //printf("Ab Baari Y ki\n");
    //prnt(y,4);
    
}

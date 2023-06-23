#include<stdio.h>

void scanarr(int a[],int n)
{
    printf("// Scanning Array elements \n");
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&a[i]);
    }
}

void printarr(int a[],int n)
{
    printf("// Printing Array elements \n");
    int i;
    for(i=0;i<n;i++)
    {
        printf("Element %d is: ",i+1);
        printf("%d\n",a[i]);
    }
}
void main()
{
    
    int a[1];
    int b[1];
    int c[1];
    
    scanarr(a,5);
    
    printarr(a,5);
    
    scanarr(b,5);
    
    printarr(b,5);
    
    scanarr(c,5);
    
    printarr(c,5);
}

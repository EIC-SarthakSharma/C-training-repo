#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int *fp;
    fp=(int *)malloc(sizeof(int));
    *fp=50;
    printf("%d\n",*fp);
    free(fp);
    return 0;
}

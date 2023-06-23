#include <stdio.h>

struct cric
{
    char name[100];
    int score;
    struct cric *nxt;                     // For initialization of linked list
    
};

int main()
{
    struct cric c[3]={{"Shubhman",70,c+1},{"Dhoni",100,c+2},{"Sachin",200,c}};
    
    struct cric *p;
    
    p=&c[0];
    
    printf("%s\n",p->name);
    printf("%d\n",p->score);
    
    p++;
    printf("%s\n",p->name);
    printf("%d\n",p->score);
    
    p++;
    printf("%s\n",p->name);
    printf("%d\n",p->score);
    
    return 0;
}


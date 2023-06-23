#include <stdio.h>

struct coordinates
{
    int x,y;
    
};

typedef struct coordinates point;

/*void sumpts(struct coordinates p1, struct coordinates p2)
{
    struct coordinates ps;
    
    ps.x=p1.x+p2.x;
    ps.y=p1.y+p2.y;
    
    printf("Sum of both coorinates is (%d,%d)\n",ps.x,ps.y);
    
}*/

point sumpts(point p1, point p2)
{
    point ps;
    
    ps.x=p1.x+p2.x;
    ps.y=p1.y+p2.y;
    return ps;
    //printf("Sum of both coorinates is (%d,%d)\n",ps.x,ps.y);
    
}

int main()
{
    
    point p1,p2,p3;
    
    p1.x=5;
    p1.y=3;
    
    p2.x=8;
    p2.y=6;
    
    
    
    p3=sumpts(p1,p2);
    
    printf("Sum of coordinates (%d , %d)\n",p3.x,p3.y);
    return 0;
}


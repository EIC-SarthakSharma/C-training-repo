#include <stdio.h>
#include<string.h>
struct student 
    {
        int roll;
        char name[80];
        int age;
        char city[20];
        int marks;
    };
    
int main()
{
    int n;
    
    printf("Enter number of Students: ");
    scanf("%d",&n);
    
    struct student s[n],*p,*q;
    
    p=&s[0];
    
    for(int i=0;i<n;i++)
    {
        p=&s[i];
        printf("Enter Name of Sudent %d: ",i+1);
        scanf("%s",p->name);
        //gets(s[i].name);
    
        printf("Enter Age of Sudent %d: ",i+1);
        scanf("%d",&p->age);
    
        printf("Enter Roll Number of Sudent %d: ",i+1);
        scanf("%d",&p->roll);

        printf("Enter City of Sudent %d: ",i+1);
        scanf("%s",p->city);
        //gets(s[i].city);
    
        printf("Enter Marks of Sudent %d: ",i+1);
        scanf("%d",&p->marks);
        
        printf("\n\n");
        
        //p=p+1;
    
    }
    
    //printf("--------------------Displaying Data of %d Students------------------\n",n);
    
    for(int i=0;i<n;i++)
    {
        printf("--------------------Displaying Data of Student %d ------------------\n",i+1);
        q=&s[i];
        printf("Name of Student %d: %s \n",i+1,q->name);
        printf("Age of Student %d: %d\n",i+1,q->age);
        printf("Roll Number of Student %d: %d\n",i+1,q->roll);
        printf("City of Student %d: %s\n",i+1,q->city);
        printf("Marks of Student %d: %d\n",i+1,q->marks);
        
        
    }
    
}
    

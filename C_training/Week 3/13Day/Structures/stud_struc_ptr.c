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
    struct student s1;
    struct student *p;
    
    p=&s1;
    
    printf("Enter Name : ");
    scanf("%s",p->name);
    
    printf("Enter Age : ");
    scanf("%d",&p->age);
    
    printf("Enter Roll Number : ");
    scanf("%d",&p->roll);
    
    printf("Enter City : ");
    scanf("%s",p->city);
    
    printf("Enter Marks : ");
    scanf("%d",&p->marks);
    
    printf("--------------------Displaying Data of S1------------------\n");
    
    printf("Name : %s \n",p->name);
    printf("Age : %d\n",p->age);
    printf("Roll Number : %d\n",p->roll);
    printf("City : %s\n",p->city);
    printf("Marks : %d\n",p->marks);
}


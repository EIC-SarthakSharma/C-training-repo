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
    
    struct student s[n];
    
    for(int i=0;i<n;i++)
    {
        printf("Enter Name of Sudent %d: ",i+1);
        scanf("%s",s[i].name);
        //gets(s[i].name);
    
        printf("Enter Age of Sudent %d: ",i+1);
        scanf("%d",&s[i].age);
    
        printf("Enter Roll Number of Sudent %d: ",i+1);
        scanf("%d",&s[i].roll);

        printf("Enter City of Sudent %d: ",i+1);
        scanf("%s",s[i].city);
        //gets(s[i].city);
    
        printf("Enter Marks of Sudent %d: ",i+1);
        scanf("%d",&s[i].marks);
        
        printf("\n\n");
    
    }
    
    //printf("--------------------Displaying Data of %d Students------------------\n",n);
    
    for(int i=0;i<n;i++)
    {
        printf("--------------------Displaying Data of Student %d ------------------\n",i+1);
    
        printf("Name of Student %d: %s \n",i+1,s[i].name);
        printf("Age of Student %d: %d\n",i+1,s[i].age);
        printf("Roll Number of Student %d: %d\n",i+1,s[i].roll);
        printf("City of Student %d: %s\n",i+1,s[i].city);
        printf("Marks of Student %d: %d\n",i+1,s[i].marks);
    }
    
}
    

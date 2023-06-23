#include <stdio.h>

void main()
{
    int tq,cq,iq,cm,im,tcm,tim;
    float prc,tm;
    printf("Enter Total ques:");
    scanf("%d",&tq);
    printf("Enter Correct ques:");
    scanf("%d",&cq);
    
    printf("Enter Marks for correct ques:");
    scanf("%d",&cm);
    printf("Enter Marks for incorrect ques(enter negative value):");
    scanf("%d",&im);
    
    iq=tq-cq;
    tcm=cm*cq;
    tim=im*iq;
    
    tm=tcm+tim;
    
    prc=(tm/tq)*100;
    
    if(prc>=50)
    {
        printf("The Result for the entry is PASS:\nTotal Correct:%d \nTotal Incorrect:%d \nTotal Marks:%.2f \nPercentage:%.2f\n",cq,iq,tm,prc);
    }
    else
    {
        printf("The Result for the entry is Fail:\nTotal Correct:%d \nTotal Incorrect:%d \nTotal Marks:%.2f \nPercentage:%.2f\n",cq,iq,tm,prc);
    }
}

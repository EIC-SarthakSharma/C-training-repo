#include <stdio.h>

void main()
{
    int ch,gth,pth,csz,rth,prc;
	
	printf("Press 1 for Punjabi-thaali(includes Panner Butter Masala , 4 Butteer Naan, Dal Makhni) - 298\nPress 2 for Gujrati-thaali(Includes Patra,Fafda,Jalebi,Gulab Jamun)) - 330\nPress 3 for Rajasthani-thaali(Includes Dal,baati,Choorma(Plain & Gulaab Choorma),Gatta Sabzi) - 450\nPress 4 for Chinese Sizzler - 250\nPress 5 to order more\nPress 0 to exit\n");
	scanf("%d",&ch);
	
	switch(ch)
	{
	    case 0: printf("Thank You for Coming"); break;
	    case 1:printf("You have Chosen Punjabi Thaali\n");
	    printf("Enter no. of thaali:");
	    scanf("%d",&pth);
	    prc=pth*298;
	    printf("Your Bill is %d\nThank You for Coming",prc);
	    break;
	    case 2:printf("You have Chosen Gujrati Thaali\n");
	    printf("Enter no. of thaali:");
	    scanf("%d",&gth);
	    prc=gth*330;
	    printf("Your Bill is %d\nThank You for Coming",prc);
	    break;
	    case 3:printf("You have Chosen Rajasthani Thaali\n");
	    printf("Enter no. of thaali:");
	    scanf("%d",&rth);
	    prc=rth*450;
	    printf("Your Bill is %d\nThank You for Coming",prc);
	    break;
	    case 4:printf("You have Chosen Chinese Sizzler\n");
	    printf("Enter no. of sizzlers:");
	    scanf("%d",&csz);
	    prc=csz*250;
	    printf("Your Bill is %d\nThank You for Coming",prc);
	    break;
	    case 5: 
	    {
	    	printf("Press 1 for Punjabi-thaali(includes Panner Butter Masala , 4 Butteer Naan, Dal Makhni) - 298\nPress 2 for Gujrati-thaali(Includes Patra,Fafda,Jalebi,Gulab Jamun)) - 330\nPress 3 for Rajasthani-thaali(Includes Dal,baati,Choorma(Plain & Gulaab Choorma),Gatta Sabzi) - 450\nPress 4 for Chinese Sizzler - 250\nPress 5 to order more\nPress 0 to exit\n");
	scanf("%d",&ch);
		switch(ch)
		{
		    case 0: printf("Thank You for Coming"); break;
		    case 1:printf("You have Chosen Punjabi Thaali\n");
		    printf("Enter no. of thaali:");
		    scanf("%d",&pth);
		    prc=pth*298;
		    printf("Your Bill is %d\nThank You for Coming",prc);
		    break;
		    case 2:printf("You have Chosen Gujrati Thaali\n");
		    printf("Enter no. of thaali:");
		    scanf("%d",&gth);
		    prc=gth*330;
		    printf("Your Bill is %d\nThank You for Coming",prc);
		    break;
		    case 3:printf("You have Chosen Rajasthani Thaali\n");
		    printf("Enter no. of thaali:");
		    scanf("%d",&rth);
		    prc=rth*450;
		    printf("Your Bill is %d\nThank You for Coming",prc);
		    break;
		    case 4:printf("You have Chosen Chinese Sizzler\n");
		    printf("Enter no. of sizzlers:");
		    scanf("%d",&csz);
		    prc=csz*250;
		    printf("Your Bill is %d\nThank You for Coming",prc);
		    break;
		}
	    break;
	    default: printf("Enter Valid choice");
	}
	}
}


#include <stdio.h>

/*#include<string.h>

int main()
{
    char st1[100],st2[100];
    gets(st1);
    gets(st2);
    printf("are both string same ? --->  %d\n",strcmp(st1,st2));
	if(strcmp(st1,st2)==0)
	{
		printf("Both are same\n");
	}
	else
	{
		printf("Both are not same\n");
	}
    return 0;
}*/

int str_cmp(char *str1,char *str2)
{
	int i=0;  //Anwer to query if both are same;
	while(*str1 != '\0' || *str2 != '\0')
	{
		if(*str1 == *str2)
		{
			i=0;
		}
		
		else
		{
			i++;
		}
		str1++;
		str2++;
		
	}
	
	return i;
}

int main()
{
    char st1[100],st2[100];
    gets(st1);
    gets(st2);
    printf("are both string same ? --->  %d\n",str_cmp(st1,st2));
	if(str_cmp(st1,st2)==0)
	{
		printf("Both are same\n");
	}
	else
	{
		printf("Both are not same\n");
	}
    return 0;
}


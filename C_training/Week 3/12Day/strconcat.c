#include <stdio.h>

#include<string.h>

/*int main()
{
    char st1[100],st2[100];
    gets(st1);
    gets(st2);
    printf("Concatenated string --->  %s\n",strcat(st1,st2));
	
    return 0;
}*/

void str_cat(char str1[],char str2[])
{
	int n=strlen(str1)+strlen(str2),i;
	int x=strlen(str1);
	//char catstr[100];
	for(i=strlen(str1);i<n;i++)
	{
		str1[i]=str2[i-x];
		printf("%c at %d\n",str1[i],i);		
	}
	str1[i]='\0';
	
	printf("%s\n",str1);
 
}


int main()
{
	//char con_str;
    char st1[100]="abc",st2[100]="def";
    //gets(st1);
    //gets(st2);
    printf("s1: %s\n",st1);
    printf("s2: %s\n",st2);
    str_cat(st1,st2);
    //printf("Concatenated string --->  %s\n",con_str);
	
    return 0;
}


#include <stdio.h>
/*#include<string.h>

int main()
{
    char st[100];
    gets(st);
    printf("Length of string is : %d",strlen(st));

    return 0;
}*/

int string_leng(char *p)
{
	int l=0;
	while(*p != '\0')
	{
		l++;
		p++;
	}
	
	return l;
}


int main()
{
	 char st[100];
    gets(st);
	printf("Length of string is : %d\n",string_leng(st));
}

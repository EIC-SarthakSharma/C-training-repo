#include<stdio.h>
void main()
{
char c;
scanf("%c",&c);

switch(c)
{
case 'a':
case 'A':
case 'e':
case 'E':
case 'i':
case 'I':
case 'o':
case 'O':
case 'u':
case 'U':
printf("The character %c is vowel",c);
break;
default:
printf("Other Alphabet");
}
}

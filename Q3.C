#include<stdio.h>
#include<string.h>

void removech()
{
char str[30];
char ch;
int a, i=0;
printf(" enter a string:-");
gets(str);
printf("enter a character that you want to remove from the string:-");
scanf("%c",&ch);
a=strlen(str);
while(i<=a)
{
if(ch!=str[i])
printf("%c",str[i]);
i++;
}

main()
{
removech();
}

OUTPUT:-
enter a string:-hello how are you
enter a character that you want to remove from the string:-o
hell hw are yu
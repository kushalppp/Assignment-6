#include<stdio.h>
#include<string.h>

void removech()
{
char str[30];
char ch;
int  i=0;
printf(" enter a string:-");
gets(str);
printf("enter a character that you want to remove from the string and replaced:-");
scanf("%c",&ch);

while(i<=30)
{
if (ch!=str[i]){
printf("%c",str[i]);
}
else
 {printf("*");}
i++;
}
}

main()
{
removech();
}

OUTPUT:-
enter a string:-hi kushal jjjmsaikiucnmschknmecunji
enter a character that you want to remove from the string and replaced:-h
*i kus*al jjjmsaikiucnmsc*knmec
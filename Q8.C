#include<stdio.h>
#include<string.h>

void words(char c)
{
switch(c)
{
case '1' :
      printf("one ");
      break;
case '2' :
      printf("two ");
      break;
case '3' :
      printf("three ");
      break;
case '4' :
      printf("four ");
      break;
case '5' :
      printf("five ");
      break;
case '6' :
      printf("six ");
      break;
case '7' :
      printf("seven ");
      break;
case '8' :
      printf("eight ");
      break;
case '9' :
      printf("nine ");
      break;
case '0':
      printf("zero ");
      break;
default :
      break;

}
}

main()
{
char str[30];
int a, i;
printf("enter a number:-");
gets(str);
a=strlen(str);
for(i=0;i<=a;i++)
{
words(str[i]);
}
}

OUTPUT:-
enter a number:-25974
two five nine seven four
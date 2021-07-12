#include<stdio.h>
#include<string.h>

 void numeric()
{
char str1[30];
int x;
printf("enter a string of digits:-");
gets(str1);
x=atoi(str1);
printf("numeric value of string is:- %d",x);
}

main()
{
numeric();
}


OUTPUT:-
enter a string of digits:-9652341
numeric value of string is:- 9652341

enter a string of digits:-hello
numeric value of string is:- 0
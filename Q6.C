#include<stdio.h>
#include<string.h>
#include<stdlib.h>

 void inttostr()
{
int no,base;
char p[30],a[30];
printf(" enter a number and base:-\n");
scanf(" %d %d",&no,&base);
itoa(no,p,2);
printf(" %s",p);
}

main()
{
inttostr();
}
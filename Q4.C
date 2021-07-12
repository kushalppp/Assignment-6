#include<stdio.h>
#include<string.h>

 void removechinstr()
{
char str1[30],str2[30];
int i,z,x,y,a;
char c;
printf(" enter a string1:-");
gets(str1);
printf(" enter a string2:-");
gets(str2);
x=strlen(str1);
y=strlen(str2);
for(i=0;i<=x;i++)
{
c=str1[i];
  for(z=0;z<=y;z++)
   {
    if(c==str2[z])
      str2[z]='_';
    }
 }
printf(" string1 is = %s\n",str1);
printf(" string2 is = %s\n",str2);
}

main()
{
removechinstr();
printf("In the both string if character same it replaced _ in string2\n ");
printf("Now strings are diffrent"); 
}

OUTPUT:-
enter a string1:-abcde
enter a string2:-lmkcfe
string1 is = abcde
string2 is = lmk_f__
In the both string if character same it replaced _ in string2
 Now strings are diffrent

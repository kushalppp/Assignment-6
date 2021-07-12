#include<stdio.h>
#include<string.h>

 void removechinstr()
{
char str1[30],str2[30];
int i,z,x,y,a,q;
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
q=str1[i+1];
  for(z=0;z<=y;z++)
   {
    if(c==str2[z]&&q==str2[z])
      {	str1[i]='w';
 	str1[i+1]='a';
 	str1[i+2]='s';}
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
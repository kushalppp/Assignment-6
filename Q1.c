#include<stdio.h>
#include<string.h>
void main()

{
char str1[20],str2[20],str3[20],str4[20],str5[20];
int x,z;
	printf("enter the string");
	gets(str1);
	x=strlen(str1);
	printf("\n the length is %d\n",x);
	strcpy(str2,str1);
	puts(str2);
	strcat(str3,str2);
	z=strcmp(str1,str2);
	if(z==0)
	printf("\n both string is same\n ");
	strrev(str1);
	puts(str1);
	strchr(str1,'i');
	strstr(str2,"in");
	strncpy(str4,str2,4);
	strncat(str5,str4,3);
	printf("\n %s",str5);
	
}

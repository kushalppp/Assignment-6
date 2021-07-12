#include<stdio.h>
#include<string.h>
void main()

{
char str[20],str1[20],str2[20],str3[20],str4[20]="hello",str5[20]="HELLO";
	printf("enter the string");
	scanf("%[^\n]",str);
	printf("\nthe size of  the string is %d",strlen(str));
	strcpy(str2,str);
	strcat(str3,str2);
   if(strcmp(str1,str3)==0)
   printf("\nsrring1 and string 3 equal");
   strrev(str3);
   printf("\nthe reverse is %s",str3);
   strchr(str1,'h');
   strstr(str2,"hi");
   if(stricmp(str4,str5)==0)
   printf("\n both str4 and str5 is same");
}

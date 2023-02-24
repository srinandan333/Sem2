#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
#include"reph.h" 
int main()
{
char str1[500],c1, c2; 
printf("Enter the string:\n"); 
scanf("%[^\n]s" ,str1); 
fflush(stdin);
printf("Enter a character to replace:\n"); 
scanf("%c", &c1);
fflush(stdin);
printf("Enter a character to replace with:\n "); 
scanf("%c", &c2);
replace_char(str1, c1, c2);
printf("string after replacing %s\n", str1); 
return 0;
}

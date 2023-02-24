#include<stdio.h> 
#include<string.h> 
#include"rech.h" 
int main()
{
char s1[100],s2[100]; 
printf("enter the string"); 
scanf("%s %s",s1,s2);
printf("%d", strend(s1,s2));
}

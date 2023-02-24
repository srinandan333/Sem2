#include<stdio.h> 
#include"remh.h" 
int main()
{
char str1[100]; 
printf("Enter any String: "); 
scanf("%[^\n]s",str1);
printf("String Before removing the Duplicates: %s\n",str1); 
removeDup(str1);
printf("String After removing the Duplicates: %s\n",str1); 
return 0;
}


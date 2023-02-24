
#include<stdio.h> 
#include "palh.h" 
int main()
{
char a[100];char*c; char*b;
printf("Enter the string you want to reverse : ");
scanf("%s",a);
rev(a);
printf("the reversed string is :%s",a);
}

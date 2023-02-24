#include<stdio.h> 
#include<string.h> 
#include"palh.H" 
void rev(char*a)
{
int n=strlen(a);
for (int i=0;i<n/2;i++)
{
char ch=a[i]; 
a[i]=a[n-i-1];
a[n-i-1]=ch;
}
}

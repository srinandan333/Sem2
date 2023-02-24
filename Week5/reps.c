#include"reph.h" 
#include<stdlib.h> 
#include<string.h>
void replace_char(char *str1,char c1,char c2)
{
int i; for(i=0;str1[i];i++)
{
if(str1[i]==c1)
{
str1[i]=c2;
}
}
}



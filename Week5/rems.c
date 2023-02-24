#include<stdio.h> 
#include"remh.h"
void removeDup(char *str1)
{
int i=0; while(str1[i]!='\0')
{
removeall(str1,str1[i],i+1); 
i++;
}
}

void removeall(char *str1,const char toremove, int index)
{
int i; while(str1[index]!='\0')
{
if(str1[index]==toremove)
{
i=index; while(str1[i]!='\0')
{
str1[i]=str1[i+1]; i++;
}
}
else
index++;
}
}



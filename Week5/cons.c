#include"conh.h"
void mystrcat(char *d,const char *s)
{
while(*d)
{
d++;
}
while(*d++=*s++)
;
}


char* mystrncat(char *d1,const char *s1,int n)
{
int i; for(i=0;i<n;i++)
{
mystrcat(d1,s1);
}
return d1;
}

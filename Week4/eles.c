#include<stdio.h> 
#include"eleh.h"
int unique(int base[], int a, int u[])
{
int current; 
int c=0;
int un = 0;
for(int i=0;i<a;i++)
{
current = base[i]; 
for(int j=0;j<a;j++)
{
if (base[j] == current)
{ c++;
}
}
if (c==1)
{
u[un] = current; un++;
}
c = 0;
}
return un;
}
void read(int n[], int a)
{
printf("Start entering elemnets:\n"); 
for(int i=0;i<a;i++)
scanf("%d", &n[i]);
}



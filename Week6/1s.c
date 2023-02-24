#include <stdio.h>
#include "1h.h"
void pascal(int n;int a[][n],int n)
{
for(int i=1;i<=n;i++)
{
for(int j=1;j<=i;j++)
{
if(j==1||j==i)
a[i][j]=1;
else
a[i][j]=a[i-1][j]+a[i-1][j-1];
}
}
disp(a,n);
}
void disp(int n;int a[][n],int n)
{
for(int i=1;i<=n;i++)
{
for(int k=1;k<=n-i;k++)
{
printf(" ");
}
for(int j=1;j<=i;j++)
{
printf("%d",a[i][j]);
}
putchar('\n');
}
}

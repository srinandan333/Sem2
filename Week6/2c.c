#include <stdio.h> 
#include "2h.h"
int main()
{
int m,n;
printf("Enter number of m elements:\n"); scanf("%d",&m);
printf("Enter number of n elements:\n"); scanf("%d",&n);
int a[m][n];
int t[m][n];
printf("Enter the elements in the %dx%d matrix:\n",m,n); for(int i=0;i<m;i++)
{
printf("Elements in row %d:\n",(i+1)); for(int j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
t[i][j]=a[j][i];
}
}
if(m!=n)
printf("It is not a symmetric matrix\n");
else
{
if(sym(a,t,n))
printf("It is a symmetric matrix\n");
else
printf("It is not a symmetric matrix\n");
}
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
printf("%d ",a[i][j]);
}
putchar('\n');
}
return 0;
}


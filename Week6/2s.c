#include <stdio.h> 
#include "2h.h"
int sym(int n;int a[n][n],int t[n][n],int n)
{
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
if((a[i][j])!=(t[i][j]))
return 0;
}
}
return 1;
}


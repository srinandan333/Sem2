#include<stdio.h>
void  sort(int  arr[],int  size)
{
int  i,j,tmp;
for(i=0;  i<size;  i++)
{
for(j=i-1;  j>=0;  j--)
{
if(arr[j]>arr[j+1])
{
tmp=arr[j]; arr[j]=arr[j+1]; arr[j+1]=tmp;
}
else break;
}
}
}
void  printer(int  a[20],int  n)
{
for(int  i=0;i<n;++i)
{
printf("%d  ",a[i]);
}
}
int main()
{
int  n,a[20];
printf("Enter  the  total  no.  of  elements  for  sorting  (n<21):\n"); scanf("%d",&n);
printf("Enter  the  elements  of  array:\n"); for(int  i=0;i<n;++i)
{
scanf("%d",&(a[i]));
}
printf("Before  sorting:\n"); for(int  i=0;i<n;++i)
{
printf("%d  ",a[i]);
}
sort(a,n);
printf("\nAfter  sorting:\n"); printer(a,n);
return  0;
}

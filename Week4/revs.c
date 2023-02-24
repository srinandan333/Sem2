#include<stdio.h> 
#include "revh.h"
void reverse(int a[],int s,int e)
{
int temp; while(s<e)
{
temp=a[s]; a[e]=a[s]; a[e]=temp;
++s;
--e;
}
}
void read(int a[],int n)
{
int i;
printf("enter the elements"); for(i=0;i<n;i++)
scanf("%d",&a[i]);
}
void disp(int a[],int n)
{
int i;
printf("the elements are\n"); for(i=0;i<n;i++)
printf("%d \t",a[i]); printf("\n");
}


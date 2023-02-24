#include<stdio.h> 
#include "revh.h"

int main()
{
int a[100]; int n,i;
printf("enter the size of the array");
 

	scanf("%d",&n); read(a,n);
printf("array elements are \n"); disp(a,n);
reverse(a,0,n-1); printf("reversed array:\n"); disp(a,n);
return 0;
}


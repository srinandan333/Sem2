#include<stdio.h> 
#include"eleh.h" 
int main()
{
int n[100], u[100], a;
printf("Enter size of array: ");
scanf("%d", &a);
read(n, a);
int un = unique(n, a, u);
printf("Number of unique elements in the array: %d \n",un);
printf("The unique elements are: ");
for(int i=0;i<un;i++)
printf("%d ", u[i]); printf("\n");
}


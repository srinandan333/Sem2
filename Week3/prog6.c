#include<stdio.h> int fact(int n);
int main()
{
int sum=0,i,n;
printf("enter the number"); scanf("%d",&n);
for(i=1; i<=n; i++)
{
sum = sum+(fact(i)/i);
}
printf(" The sum is %d", sum); return 0;
}

int fact(int n)
{
int i, prod=1; for(i=1; i<=n; i++)
{
prod=prod*i;
}
return prod;
}

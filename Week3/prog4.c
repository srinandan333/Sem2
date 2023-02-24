#include<stdio.h> int Prime(int n);

int main()
{
int n, res;
printf(" Enter a number: "); scanf("%d",&n);
res = Prime(n); if (res==1)
printf(" The number is prime."); else
printf(" The number is not prime."); return 0;
}

int Prime(int n)
{
int i; for(i=2;i<n/2;i++)
{
if(n%i==0)
return 0;
else
return 1;
}
}

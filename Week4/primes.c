#include<stdio.h> 
#include"primeh.h" 
int is_prime(int n)
{
if (n<3)
return 1;

int prime = 1;
for (int i = 2; i <= (n/2); i++)
{
if (n % i == 0)
{
prime = 0; break;
}
}
return prime;
}
int next(int n)
{
if (n%2==0) n -= 1;
for (int i=n+2;;i+=2)
{

if (is_prime(i) == 1) return i;
}
return 0;
}


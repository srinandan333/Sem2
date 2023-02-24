#include<stdio.h> 
#include"facth.h" 
long fact(int n)
{
return (n==0)?1:n*fact(n-1);
}

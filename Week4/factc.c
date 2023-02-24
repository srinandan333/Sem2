#include<stdio.h> 
#include"facth.h" 
int main()
{
int n,r;
printf("Enter the value of number and factor: "); 
scanf("%d %d", &n, &r);
if (r > n)
{
printf("error"); return 1;
}
long ncr =fact(n)/(fact(r)*fact(n-r)); 
printf("nCr is %d \n",ncr);
}


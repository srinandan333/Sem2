
#include<stdio.h> int re(int n);
int main()
{
int n,r;
printf("enter the number"); scanf("%d",&n);
r=re(n); if(n==r)
printf("the number is a palindrome");
else
printf("the number is not a palindrome"); return 0;
}
 

	int re(int n)
{
int r,t; r=0;
while(n!=0)
{
t=n%10;
r=r*10+t; n=n/10;
}
return r;
}

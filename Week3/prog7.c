#include<stdio.h> 
int fibonacci(int n); int main()
{
int n;
 

	printf("enter the range : "); scanf("%d", &n); fibonacci(n);
return 0;
}
int fibonacci(int n)
{
int a=0,b=1,s=0; printf("%d\t %d\t ",a,b); for(int i=2;i<=n;i++)
{
s=a+b; printf("%d\t",s); a=b;
b=s;
}
return 0;
}

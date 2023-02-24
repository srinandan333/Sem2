#include<stdio.h> int d2o(int n);
int main()
{
 

	int n;
printf(" Enter the decimal number: "); scanf("%d",&n);
printf(" The octal number is %d", d2o(n)); return 0;
}

int d2o(int n)
{
int res=0, t=1; while(n!=0)
{
res=res+(n%8)*t; n = n/8;
t = t*10;
}
return res;
}

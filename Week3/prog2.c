#include<stdio.h> int gcd(int n, int m);
int main()
{
int a,b,c,r1,r2;
printf("enter the three numbers"); scanf("%d %d %d",&a,&b,&c); r1=gcd(a,b);
r2=gcd(c,r1);
printf("the gcd is:%d",r2); return 0;
}
int gcd( int n,int m)
{
int g,min; if(m>=n)
min=n;
else
min=m;
for(int i=1;i<=min;i++)
{
if(m%i==0 && n%i==0) g=i;
}
return g;
}

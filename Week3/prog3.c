#include<stdio.h> int arm(int n);
int perfect(int n); int main()
{
int n;
printf("enter the number"); scanf("%d",&n); if(arm(n)==1)
printf("the number is an armstrongm number\n");
else
printf("the number is not an armstrong number\n"); if(perfect(n)==1)
printf("the number is a perfect number");
else
printf("the number is not a perfect number"); return 0;
}

int arm(int n)
{
int n1,d,s; n1=n; s=0;
while(n!=0)
{
d=n%10;
s=s+d*d*d; n=n/10;
}
return(n1==s);
}

int perfect(int n)
{
int s,n1; s=0;
n1=n;
for(int i=1;i<n;i++)
{
if(n%i==0)
s=s+i;
}
return(n1=s);
}

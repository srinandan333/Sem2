#include"fibh.h"
void fibonacci(int s[], int n)
{
int n1 = 0, n2 = 1, n3;
s[0] = n1;
s[1] = n2;
for (int i = 0; i < n-2; ++i)
{
n3=n1+n2; 
s[i+2] = n3; 
n1=n2; 
n2=n3;
}
}


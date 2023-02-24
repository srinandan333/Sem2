#include<stdio.h> 
#include"fibh.h" 
int main()
{
int s[100], n;
printf("Enter the number of terms: "); 
scanf("%d", &n);
if (n==1)
printf("0 \n"); 
else if (n==2)
printf("0\n1\n");
else
{
fibonacci(s, n);
for(int i = 0;i<n;i++)
printf("%d ", s[i]); 
printf("\n");
}
}
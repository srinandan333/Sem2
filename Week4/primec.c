#include<stdio.h> 
#include"primeh.h" 
int main()
{
int n;
printf("Enter a positive integer: "); 
scanf("%d", &n);
int p1= next(n);
if (is_prime(n) == 1)
printf("The number is prime. The next prime number is: %d\n", p1);
else
printf("Number is not prime. The next prime number is: %d\n", p1);

}


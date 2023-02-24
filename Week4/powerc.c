#include <stdio.h> 
#include"powerh.h" 
int main()
{
int base, power;
printf("Enter the base number: "); 
scanf("%d", &base);
printf("Enter the power to be raised to: "); 
scanf("%d", &power);
int ans = pows(base, power);
printf("The value of %d to the power of %d is : %d \n", base,power,ans);
}



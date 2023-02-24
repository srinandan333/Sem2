#include <stdio.h> 
#include "4h.h"
int main()
{
complex n1,n2,sum,sub;
printf("Enter the first complex number:\n"); 
printf("Enter real and imaginary part:\n");
scanf("%f,%f",&n1.real,&n1.img); 
printf("Enter the second complex number:\n");
printf("Enter real and imaginary part:\n"); 
scanf("%f,%f",&n2.real,&n2.img); 
sum=add(n1,n2);
sub=subc(n1,n2);
printf("Sum = %.2f+%.2fi\n",sum.real,sum.img);
printf("Subtracted result = %.2f+%.2fi",sub.real,sub.img); 
return 0;
}

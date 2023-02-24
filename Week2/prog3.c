
#include<stdio.h>
int main()
{
unsigned int c;
int i;
printf("enter a number\n");
scanf("%d", &c);
printf("enter the bit to check \n");
scanf("%d", &i);
if(c &(1<<i))
{
    printf("bit is set\n");
}
else 
{
    printf("bit is not set\n");
}
printf("enter the bit to set \n");
scanf("%d", &i);
c=c|(1<<i);
printf("%u", c);
printf("\nenter the bit to unset \n");
scanf("%d", &i);
c=c^(1<<i);
printf("%u", c);
return 0;
}


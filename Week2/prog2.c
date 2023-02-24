#include<stdio.h>
int main()
{
char c;
printf("enter line to convert to lower case");
while((c=getchar())!='\n')
{
    if(c>= 'a' && c<= 'z')
    {
        c=(c + 'A' - 'a');
    }
    putchar(c);
}
return 0;
}        


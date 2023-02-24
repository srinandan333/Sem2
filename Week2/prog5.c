
#include<stdio.h>
int main()
{
    double b,c,s;
    char a;
    printf("enter the operation to be performed");
    scanf("%c", &a);
    printf("enter the two operands");
    scanf("%lf %lf", &b,&c);
    switch(a)
    {
    case '+': s=b+c;
        break;
    case '-': s=b-c;
        break;
    case '*': s=b*c;
        break;
    case '/': s=b/c;
        break;
    default:printf("errot");
     }
    printf("the answer is %lf", s);
    return 0;
}


#include<stdio.h>
int main()
{
int marks;
printf("enter the marks:");
scanf("%d", &marks);
if(marks>85 && marks<=100)
{
    printf("the grade is a");

}
else if(marks>60 && marks <=85)
{
    printf("the grade is b");
}
else if (marks>40 && marks<=60)
{
    printf("the grade is c");
}
else if (marks>30 && marks<=40)
{
    printf("the grade is d");
}
else
{
    printf("you failed");
}
return 0;
}



#include<stdio.h>
int main()
{
int dd,mm,yy,max;
printf("enter the day");
scanf("%d",&dd);
printf("\nenter the month");
scanf("%d",&mm);
printf("enter the year");
scanf("%d",&yy);
if(mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12)
max=31;
else if(mm==4||mm==6||mm==9||mm==11)
max=30;
else if(yy%4==0 && yy%100!=0 || yy%400==0)
max=29;
else
max=28;
if(mm<1 || mm>12)
printf("month is invalid");
else if(dd<1 || dd>max)
printf("day is invalid");
else if(dd==max && mm!=12)
{
dd=1;
mm=mm+1;
printf("next date is:%d %d %d",dd,mm,yy);
}
else if(dd==max && mm==12)
{
dd=1;
mm=1;
yy=yy+1;
printf("next date is:%d %d %d",dd,mm,yy);
}
else
{
dd=dd+1;
printf("next date is:%d %d %d",dd,mm,yy);
}
return 0;
}


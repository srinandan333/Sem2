#include<stdio.h> 
int valid(int,int,int); int main()
{
int a, b, c;
printf("enter the angles"); scanf("%d %d %d",&a,&b,&c); valid(a,b,c);
return 0;
}
int valid(int x,int y, int z)
{
int s;
 

	s=x+y+z; if(s!=180)
printf("triangle is invalid"); else
printf("triangle is valid"); return 0;
}

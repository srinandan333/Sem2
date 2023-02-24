#include<stdio.h> 
void read(char s[])
{	char  str[100]; int  i,n;
FILE  *fp=fopen(s,"w+");
printf("  Input  the  number  of  lines  to  be  written  :  "); scanf("%d",  &n);
printf("\n  ::  The  lines  are  ::\n"); for(i=0;i<n+1;i++)
{
fgets(str,sizeof(str),stdin); fputs(str,fp);
}
fclose(fp);
}
void printer(char s[])
{	char str;
FILE  *fp=fopen(s,"r");
printf("\n  The  content  of  the  file  %s  is	:\n",s); str  =  fgetc(fp);
while  (str  !=  EOF)
{
printf  ("%c",  str); str = fgetc(fp);
}
}
int main()
{
char  s[10];
printf("Enter  the  filename:\n"); gets(s);
read(s);
printer(s); printf("\n"); return  0;
}

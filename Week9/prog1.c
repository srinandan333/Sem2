#include  <stdio.h> 
#include  <stdlib.h>
void  read(FILE  *fp1,FILE  *fp2,FILE  *fp3)
{	char c;
while  ((c  =  fgetc(fp1))  !=  EOF) fputc(c, fp3);
while  ((c  =  fgetc(fp2))  !=  EOF) fputc(c, fp3);
}
int main()
{
char  a[10],b[10],c[10]; printf("Enter  the  1st  file  name:  "); scanf("%s",a);
printf("Enter  the  2nd  file  name:  "); scanf("%s",b);
printf("Enter  the  file  name  to  merge  contents  of  prev  files:  "); scanf("%s",c);
FILE  *fp1  =  fopen(a,  "r"); FILE  *fp2  =  fopen(b,  "r"); FILE *fp3 = fopen(c, "a");
if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
{
puts("Could  not  open  files"); exit(0);
}
read(fp1,fp2,fp3);
printf("The  %s  and  %s  merged  into  %s  file",a,b,c); fclose(fp1);
fclose(fp2); fclose(fp3); return  0;
}

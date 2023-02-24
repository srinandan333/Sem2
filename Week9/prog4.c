#include<stdio.h> 
#include<string.h> 
#include<stdlib.h>
struct  student
{
int srn; char  nm[10];
};
typedef  struct  student  stud;
void  itptr(stud  *s,stud  *ptr[],int  n)
{
for(int  i=0;i<n;++i)
{
ptr[i]=&s[i];
}
}
void  printer(stud  *ptr[],int  n)
{
for(int  i=0;i<n;++i)
{
printf("%d\t%s\n",ptr[i]->srn,ptr[i]->nm);
}
}
void bubsrt_srn(stud *s[],int n)
{
for(int  i=0;i<n;++i)
{
for(int  j=0;j<n-i-1;++j)
{
if(s[j]->srn>s[j+1]->srn)
{
stud  *temp=s[j]; s[j]=s[j+1]; s[j+1]=temp;
}
}
}
}
void  bubsrt_nm(stud  *s[],int  n)
{
for(int  i=0;i<n;++i)
{
for(int  j=0;j<n-i-1;++j)
{
if(strcmp(s[j]->nm,s[j+1]->nm)>0)
{
stud  *temp=s[j]; s[j]=s[j+1]; s[j+1]=temp;
}
}
}
}
void  bubsrt(void  (*ptr)(),stud  *s[],int  n)
{
(*ptr)(s,n);
}
int main()
{
stud  a[100];
void  (*ptr1)()=&bubsrt_srn; void  (*ptr2)()=&bubsrt_nm; int  i=0,n,cho;
FILE  *fp=fopen("stud.csv","r"); char  s[100],*p; fgets(s,100,fp); while(fgets(s,100,fp))
{
p=strtok(s,",");
a[i].srn=atoi(p);
p=strtok(NULL,",");
strcpy(a[i].nm,p); i++;
}
n=i; fclose(fp); stud  *ptr[100]; itptr(a,ptr,n); printer(ptr,n);
printf("Enter  the  choice\n  1.sorting  on  roll\t  2.sort  on  name  \t  0.exit\n"
);
scanf("%d",&cho); while (cho)
{
switch (cho)
{
case  1  :bubsrt(ptr1,ptr,n); printer(ptr,n);
break;
case  2  :bubsrt(ptr2,ptr,n); printer(ptr,n); break;
}
printf("Enter  the  choice\n  1.sorting  on  roll\t  2.sort  on  name\t  0.exit\
n");
scanf("%d",&cho);
}
return  0;
}


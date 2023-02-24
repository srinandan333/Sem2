#include<stdio.h> 
#include"conh.h" 
int main()
{
char s1[100],s2[100]; 
int n;
printf("Enter 1st String..."); 
scanf("%s",s1); printf("Enter 2nd String..."); 
scanf("%s",s2);
printf("Enter the number of times you want to Append..."); 
scanf("%d",&n);
printf("The Concatenated String is %s n",mystrncat(s1,s2,n)); 
return 0;
}


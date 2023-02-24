#include<stdio.h> 
#include"palh.h" 
#include<string.h> 
int main()
{
char inputArray[100], reversedArray[100]; 
printf("Enter the string for pallindrome check \n"); 
scanf("%s",inputArray);
strcpy(reversedArray, inputArray); 
strrev(reversedArray); 
if(strcmp(inputArray,reversedArray)==0)
printf("%s is a pallindrome\n",inputArray);
else
printf("%s is not a pallindrome\n",inputArray); 
return 0;
}

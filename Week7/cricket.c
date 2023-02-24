#include <stdio.h> 
#include <string.h> 
typedef struct cricket
{
char Pname[50]; char Tname[50];
float Bavg;
} cric; int n = 5;
void read(cric ary[])
{
int i;
printf("Enter the data of 5 players\n"); for (i = 0; i < n; i++)
{
printf("Enter Pname Tname Bavg for player -%d", i + 1); printf("\nEnter Player Name : ");
scanf("%s", ary[i].Pname); printf("\nEnter Team Name : "); scanf("%s", ary[i].Tname); printf("\nEnter Average : "); scanf("%f", &ary[i].Bavg); printf("\n");
}
}
void disp(cric ary[])
{
for (int i = 0; i < n; i++)
{
printf("%s %s %.2f\n", ary[i].Pname, ary[i].Tname, ary[i].Bavg);
}
}
void sort(cric ary[])
{
cric temp;
for (int i = 1; i < n; i++)
for (int j = 0; j < n - i; j++)
{
if (strcmp(ary[j].Tname, ary[j + 1].Tname) > 0)
{
temp = ary[j]; ary[j] = ary[j + 1]; ary[j + 1] = temp;
}
}
disp(ary);
}
int main()
{
cric c[5];
read(c);
sort(c);
}


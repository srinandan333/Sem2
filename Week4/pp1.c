#include<stdio.h>
void populate_array(int numbers[], int array_length); int main()
{
int numbers[100]; int array_length;
printf("Enter size of array: "); scanf("%d", &array_length); populate_array(numbers, array_length); int max=numbers[0];
int min=numbers[0];
for(int i=1;i<array_length;i++)
{
if (numbers[i] > max)
{
max=numbers[i];
}
if (numbers[i] < min)
{
min=numbers[i];
}
}
printf("Min: %d, Max: %d \n", min, max);
}
void populate_array(int numbers[], int array_length)
{
printf("Start entering elemnets:\n"); for(int i=0;i<array_length;i++)
{
scanf("%d", &numbers[i]);
}
}

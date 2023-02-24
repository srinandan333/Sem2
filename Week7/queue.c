

#include <stdio.h> 
#include <stdlib.h> 
typedef struct node
{
int prio;
char name[20]; struct node *link;
} nod;

nod *head; void close();

void queue()
{
nod *tmp;
tmp = (nod *)malloc(sizeof(nod)); printf("Enter the name: \n"); scanf("%s", tmp->name);
tmp->link;
printf("Enter the priority: \n"); scanf("%d", &tmp->prio);
tmp->link = head; head = tmp;
printf("Your input was registered \n");
}

void dequeue()
{
nod *tmp = head; nod *del = head; nod *prev;
int max = 0;
while (tmp != NULL)
{
if (tmp->prio > max)
{
max = tmp->prio;
}
else
{
tmp = tmp->link;
}
}
 


if (del != NULL && del->prio == max)
{
head = del->link;
printf("The deleted node detail is %s of priority %d\n", del->name, del->prio); free(del);
return;
}
while (del != NULL && del->prio != max)
{
prev = del;
del = del->link;
}
if (del == NULL)
{
return;
}
prev->link = del->link;
printf("The deleted node detail is %s of priority %d\n", del->name, del->prio); free(del);
}

void display()
{
nod *tmp = head;
printf("	Name	priority"); while (tmp != NULL)
{

printf("\n	%s	\t%d \n", tmp->name, tmp->prio); tmp = tmp->link;
}
}

int main()
{
int dig; head = NULL;
while (dig != 4)
{
printf("\n1.Queue\n2.dequeue\n3.View\n4.Exit\nEnter the option: \n"); scanf("%d", &dig);
switch (dig)
{
case 1:
queue(); break;

case 2:
dequeue();
 

	
break; case 3:
display(); break;

case 4:
close(); break;
}
}
return 0;
}

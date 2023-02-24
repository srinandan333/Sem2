#include <stdio.h> 
#include "3h.h"
void read(date_info *d)
{
scanf("%d/%d/%d",&d->dd,&d->mm,&d->yy);
}
int dcom(date_info *d1,date_info *d2)
{
if(d1->dd==d2->dd && d1->mm==d2->mm && d1->yy==d2->yy) return 0;
else if(d1->yy>d2->yy || (d1->yy==d2->yy&&d1->mm>d2->mm) || (d1->yy==d2->yy&&d1->mm==d2->mm&&d1->dd>d2->dd))
return 1;
return -1;
}
void dis(date_info *d)
{
printf("%d/%d/%d\n",d->dd,d->mm,d->yy);
}


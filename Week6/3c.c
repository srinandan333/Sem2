#include <stdio.h> 
#include "3h.h"
int main()
{
date_info d1; date_info d2;
printf("Enter first date in dd/mm/yyyy format: "); read(&d1);
printf("Enter second date in dd/mm/yyyy format: "); read(&d2);
printf("Date 1= ");
dis(&d1); printf("Date 2= "); dis(&d2);
int r=dcom(&d1,&d2); if(r==0)
printf("Dates are equal\n"); else if(r<0)
printf("Date 1 is smaller than date 2\n");
else
printf("Date 2 is smaller than date 1\n"); return 0;
}


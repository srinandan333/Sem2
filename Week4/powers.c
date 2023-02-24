#include"powerh.h"
int pows(int base, int power)
{
if (power != 0)
return (base * pows(base, power - 1));
else
return 1;
}

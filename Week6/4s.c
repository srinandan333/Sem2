#include <stdio.h> 
#include "4h.h"
complex add(complex n1,complex n2)
{
complex t; t.real=n1.real+n2.real; t.img=n1.img+n2.img; return t;
}
complex subc(complex n1,complex n2)
{
complex t; t.real=n1.real-n2.real; t.img=n1.img-n2.img; return t;
}


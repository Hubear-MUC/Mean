#include <stdio.h>
#include <stdlib.h>
double r;
int i;
main(int c, char** v)
{
r=0;i=0;
for (i = 1;i < c;++i)
{
r=r+atof(v[i]);
}
r=r/(c-1);
printf ("%lf\n", r);
}

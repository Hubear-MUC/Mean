#include "dincl.h"
double i, v;int c;
int main()
{
printf ("Entry of 0 exits.\n");
c=-1;v=0;
do{i=in();v=v+i;++c;}while (i!=0);
out(v/c);
}

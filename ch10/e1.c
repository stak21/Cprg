// program 10.1 -10.2 10.3

#include <stdio.h>

int main(int argc, char const *argv[])
{
int i1, i2;
int *p1, *p2;

i1 = 5;
p1= &i1;
i2 = *p1 / 2 + 10;
p2 = p1;
p1 = &i2;

printf ("i1 = %i, i2 = %i, *p1 = %i, *p2 = %i\n", i1, i2, *p1, *p2);

return 0;
}
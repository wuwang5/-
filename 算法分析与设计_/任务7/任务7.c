#include <stdio.h>
#include <stdlib.h>
int main()
{
int a, b, c, ab, bc, ac;
for (a = 1; a <= 9; a++)
for (b = 1; b <= 9; b++)
for (c = 1; c <= 9; c++)
for (ab = 1; ab <= 9; ab++)
for (bc = 1; bc <= 9; bc++)
for (ac = 1; ac <= 9; ac++)
{
if (a != b&&a != c&&a != ab&&a != bc&&a != ac
&&b != c&&b != ab&&b != bc&&b != ac
&&c != ab&&c != bc&&c != ac
&&ab != bc&&ab != ac
&&bc != ac)
{
if (a + ab + b == a + ac + c&&a + ab + b == b + bc + c)
{
printf("�����������\n");
printf(" ?%d ?\n", a);
printf(" %d %d \n", ab, ac);
printf("%d %d %d\n", b, bc, c);
}
}
}


system("pause");
return 0;
}

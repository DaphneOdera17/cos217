#include "intmath.h"
#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d %d", gcd(a, b), lcm(a, b));
    return 0;
}


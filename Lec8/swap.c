#include <stdio.h>

struct S {
    int i;
    double d;
};

void printS(struct S s)
{
    printf("%d %f\n", s.i, s.d);
}

void swap1(struct S s)
{
    int temp = s.d;
    s.d = s.i;
    s.i = temp;
}

struct S swap2(struct S s)
{
    int temp = s.d;
    s.d = s.i;
    s.i = temp;
    return s;
}

void swap3(struct S* ps)
{
    int temp = ps->d;
    ps->d = ps->i;
    ps->i = temp;
}

int main(void)
{
    struct S s = {1, 2.0};
    printS(s);
    swap1(s);
    printS(s);
    s = swap2(s);
    printS(s);
    swap3(&s);
    printS(s);
    return 0;
}   

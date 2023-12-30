#include <stdio.h>

struct S {
  double d;
  int i;
};

int main(void)
{
    struct S s1 = {2.0, 1};
    
    printf("size of struct: %lu\n", sizeof(struct S));

    return 0;
}

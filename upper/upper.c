#include <stdio.h>

int main(void)
{
    int c;
    while((c = getchar()) != EOF)
    {
        if ((c >= 97) && (c <= 122))
            c -= 32;
        putchar(c);
    }
    return 0;
}

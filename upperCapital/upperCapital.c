#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int c;
    int state = 0;
    while ((c = getchar()) != EOF)
    {
        switch (state)
        {
            case 0:
                if (isalpha(c))
                {
                    putchar(toupper(c));
                    state = 1;
                }
                else
                {
                    putchar(c);
                    state = 0;
                }
                break;
            case 1:
                if (isalpha(c))
                {
                    putchar(c);
                    state = 1;
                }
                else
                {
                    putchar(c);
                    state = 0;
                }
                break;
        }
    }

    return 0;
}   

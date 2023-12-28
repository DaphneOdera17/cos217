#include <stdio.h>
#include <ctype.h>

enum Statetype
{
    NORMAL,
    INWORD
};

int main(void)
{
    int c;
    enum Statetype state = NORMAL; 
    while ((c = getchar()) != EOF)
    {
        switch (state)
        {
            case NORMAL:
                if (isalpha(c))
                {
                    putchar(toupper(c));
                    state = INWORD;
                }
                else
                {
                    putchar(c);
                    state = NORMAL;
                }
                break;
            case INWORD:
                if (isalpha(c))
                {
                    putchar(c);
                    state = INWORD;
                }
                else
                {
                    putchar(c);
                    state = NORMAL;
                }
                break;
        }
    }

    return 0;
}


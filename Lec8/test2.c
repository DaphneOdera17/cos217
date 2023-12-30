#include <stdio.h>

int main(int agrc, char* argv[])
{
    char* pc = *argv;
    int i = 0;
    
    while(pc != NULL)
        printf("%s\n", pc ++);

    return 0;
}

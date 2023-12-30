#include <stdio.h>

int main(int argc, char* argv[]) {
    char** pc = argv;

    while (*pc != NULL) {
        printf("%s\n", *pc);
        pc++;
    }

    return 0;
}


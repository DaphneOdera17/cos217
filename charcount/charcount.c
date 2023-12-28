#include<stdio.h>
   /* write some code */ 
int main(void)
{
    int c;
    int charcount = 0;
    c = getchar();
    while(c != EOF)
    {
         charcount ++;
         c = getchar();
    }
    printf("%d\n", charcount);
    return 0;
}


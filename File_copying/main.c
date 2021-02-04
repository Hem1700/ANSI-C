#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    c = getchar();
    while(c!=EOF){
        putchar(c);
        c = getchar();
    }
/* int d;
    while(d=getchar()!=EOF){
            putchar(d);
    }*/


    return 0;
}

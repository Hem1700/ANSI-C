#include <stdio.h>
#include <stdlib.h>
#define NONBLANK '-'

int main()
{
    int c , lastc = NONBLANK;
    while((c=getchar())!=EOF){
        if(c==' '){
            if(lastc !=' '){
                 putchar(c);
            }

        }
        else
            putchar(c);
        lastc = c;


    }
    return 0;
}

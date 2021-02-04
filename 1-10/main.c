#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    while((c=getchar()) !=EOF){
        if(c=='\n'){
            putchar("||");
            putchar('n');
        }
        if(c=='\t'){
            putchar("||");
            putchar('t');
        }
        if(c==' '){
            putchar("||");
            putchar('b');
        }
        if(c!='\n' && c!='\t' && c!=' '){
            putchar(c);
        }
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab=0 , newline=0 , blanks=0 , c ;
    while((c=getchar())!=EOF){
        if(c=='\n'){
            ++newline;

        }
        if(c=='\t'){
            ++tab;
        }
        if(c== ' '){
            ++blanks;
        }

    }
    printf("%d %d  %d\n" , newline,tab , blanks);
    return 0;
}

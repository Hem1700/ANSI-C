#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c , n=0;
    while((c=getchar())!=EOF){
      if(c=='\n'){
        ++n;
      }

    }
    printf("%d" , n);
    return 0;
}

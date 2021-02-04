#include <stdio.h>
#include <stdlib.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
    int fhr;
    for(fhr=UPPER;fhr>=LOWER;fhr-=STEP){
        printf("%3d\t%6.1f\n" , fhr , (5.0/9.0)*(fhr-32));
    }
    return 0;
}

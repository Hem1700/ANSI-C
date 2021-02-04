#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius, fhr;
    int lower , upper , step;
    lower = 0;
    upper = 100;
    step = 2;
    printf("Celsius to Fahrenheit\n");
    for(int i=lower;i<=upper;i+=step){
        fhr = ((9.0/5.0)*celsius)+32;
        printf("%3.0f\t%6.1f\n" , celsius , fhr);
        celsius+=step;
    }

    return 0;
}

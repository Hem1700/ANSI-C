#include <stdio.h>
#include <stdlib.h>

int main()
{
   float fahrenheit , celsius;
   int upper , lower , step;
   lower=0;
   upper = 300;
   step = 20;
   printf("Fahrenheit To Celsius\n");
   for(int i=lower;i<=upper;i+=step){
    celsius = (5.0/9.0)*(fahrenheit-32.0);
    printf("%3.0f\t%6.1f\n" , fahrenheit , celsius);
    fahrenheit+=step;
   }
    return 0;
}

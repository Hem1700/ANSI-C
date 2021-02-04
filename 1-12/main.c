#include <stdio.h>
#include <stdlib.h>
#define IN 1
#define OUT 0
int main (int argc, char *argv[]) {
  int c,state;
  state = IN;
  while((c=getchar()) != EOF) {
    if(c==' ' || c == '\t')
      state=OUT;
    else if (state == OUT) {
      state=IN;
      putchar('\n');
      putchar(c);

    }
    else
      putchar(c);
  }
}

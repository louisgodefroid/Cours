//gcc -O0 overflow.c -o overflow -I/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/

#include <stdio.h>
#include <stdint.h>

void fill_variable(int *var)
{
  long tmp = 2;
  *var = tmp;
}

int main(void)
{
  int a = 1;
  int b = 0;
  printf("(int) a: %d\n", a);
  printf("(int) b: %u\n", b);
  printf("(long) a: %ld\n", a);
  printf("(long) b: %lu\n", b);
  fill_variable(&b);
  printf("(int) a: %d\n", a);
  printf("(int) b: %u\n", b);
  return 0;
}

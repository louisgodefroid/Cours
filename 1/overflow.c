//gcc -O0 overflow.c -o overflow -I/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/

#include <stdio.h>
#include <stdint.h>

int main(void)
{
  int a = 2;
  unsigned int b = 0;
  printf("(int) a: %d\n", a);
  printf("(int) b: %u\n", b);
  printf("(long) a: %ld\n", a);
  printf("(long) b: %lu\n", b);
  b = UINT32_MAX;
  printf("(int) a: %d\n", a);
  printf("(int) b: %u\n", b);
  b++;
  printf("(int) a: %d\n", a);
  printf("(int) b: %u\n", b);
  return 0;
}

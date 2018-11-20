//gcc -O0 variable.c -o variable -I/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/

#include <stdio.h>

int main(int argc, char **argv)
{
  int a = 12;
  int b = 42;
  int c = a * b;
  printf("%d\n", c);
  return 0;
}

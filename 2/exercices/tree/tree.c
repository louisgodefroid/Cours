#include <stdio.h>


void right_order(int length)
{
  for (int i = 0; i < length; ++i)
    {
      for (int j = 0; j <= i; ++j)
	printf("*");      
      printf("\n");
    }
}

void wrong_order(int length)
{
  for (int i = length; i > 0; --i)
    {
      for (int j = 0; j < i; ++j)
	printf("*");      
      printf("\n");
    }
}

int main(void)
{
  int length = 6;
  printf("== right order ==\n");
  right_order(length);
  printf("== reverse order ==\n");
  wrong_order(length);
  return 0;
}

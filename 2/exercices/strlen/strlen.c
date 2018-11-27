#include <stdio.h>

int my_strlen(char *array)
{
  int length = 0;
  while (array[length] != '\0')
    length++;
  return length;
}

int main(void)
{
  char array[] = "abcdefghij";
  printf("string: %s\n", array);
  int length = 0;
  length = my_strlen(array);
  printf("length: %d\n", length);
  return length;
}

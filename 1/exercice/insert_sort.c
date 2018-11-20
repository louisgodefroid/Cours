#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

int *fill_array(int *array, int length)
{
  srand(time(NULL));
  for (int i = 0; i < length; ++i)
    {
      array[i] = (rand() % 10);
    }
  return array;
}

int *sort(int *array, int length)
{
  for (int i = 0; i < length; ++i)
    {
      int current = array[i];
      int j = i;
      while (j > 0 && current < array[j - 1])
	{
	  array[j] = array[j - 1];
	  j -= 1;
	}
      array[j] = current;
    }
  return array;
}

int find(int *array, int length, int search)
{
  return 0;
}

void print_int_array(int *array, int length)
{
  for (int i = 0; i < length - 1; ++i)
    printf("%d ", array[i]);
  printf("%d\n", array[length - 1]);
}

int main(void)
{
  int length = 20;
  int *array = (int *) malloc(sizeof (int) * length);
  /*
    int array2[length];
    printf("sizeof(array2)/sizeof(int): %d\n", sizeof (array2) / sizeof (int));
    printf("sizeof(array)/sizeof(int): %d\n", sizeof (array) / sizeof (int));
    printf("* array: %s\n", array);
  */
  array = fill_array(array, length);
  print_int_array(array, length);
  array = sort(array, length);
  print_int_array(array, length);
  return 0;
}

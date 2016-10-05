#include <stdio.h>
#include "../include/test.h"

int main(int argc, char *argv[])
{
  char * str;
  generate(&str);
  printf("%s\n", str);
  return 0;
}

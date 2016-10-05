#include <stdio.h>
#include <stdlib.h>

int generate(char ** str) {
  *str = (char *) malloc ((sizeof(char)) * 100);
  snprintf(*str, 100, "linked to library B");
  return 0;
}

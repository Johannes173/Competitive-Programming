
/* A program that you can whrite code */

#include <stdio.h>
#include <stdlib.h>

#include "Competitive-Function-Program-1/\
competitive-function-program-1.h"

#include "Competitive-Function-Program-2/\
competitive-function-program-2.h"

#include "Competitive-Function-Program-3/\
competitive-function-program-3.h"

/* Compile program by typing:
gcc -o competitive-program competitive-program.c \
Competitive-Function-Program-1/competitive-function-program-1.c \
Competitive-Function-Program-2/competitive-function-program-2.c \
Competitive-Function-Program-3/competitive-function-program-3.c -lm */

int main(int argc, char** argv)
{
  int* array = generate_empty_array(10);
  array = (int[]) {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  return 0;
}

/* Made by Roy Hampus Fridholm - 2020/04/15 */

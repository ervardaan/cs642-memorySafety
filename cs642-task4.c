////////////////////////////////////////////////////////////////////////////////
//
//  File           : cs642-task4.c
//  Description    : Task 4
//
//   Author        : *** INSERT YOUR NAME ***
//   Last Modified : *** DATE ***
//

#include "bufferoverflow_util.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Write 8-byte value to memory at location addr+offset
// You will use to write values into your payload - 8-byte at a time
#define pack(addr, offset, value)                                              \
  (*((unsigned long long *)((char *)addr + offset)) = value)

int main(int argc, char **argv) {

  // similar to task3 but requires 2 arguments instead of 1
  //  i.e. two addresses

  exit(0);
}

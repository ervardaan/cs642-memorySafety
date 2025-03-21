////////////////////////////////////////////////////////////////////////////////
//
//  File           : cs642-task3.c
//  Description    : Task 3
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

  /* Step 1: Fill with A's up to return address */

  /* Step 2: Set address of return address to first instruction address of */
  /* malicious payload - <parseltongue> */

  /* Step 3: Write payload for input as input_domain of victim */
  /* see bufferoverflow_util.h for write_to_file code */
  /* write_to_file("task3-payload", ?, ?, FILE_CLEAR); */

  exit(0);
}

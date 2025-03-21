////////////////////////////////////////////////////////////////////////////////
//
//  File           : cs642-task2.c
//  Description    : Task 2
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
  /* malicious payload - <get_id> */

  /* Step 3: Prepare rest of stack to invoke the function to run mutiple time */

  /* Step 4: Set address of return address to first instruction address of */
  /* malicious payload - <get_this> */

  /* Step 5: Set address of return address to first instruction address of */
  /* malicious payload - <and_get_that> */

  /* Step 6: Exit cleanly */

  /* Step 7: Write payload for input as input_domain of victim */
  /* see bufferoverflow_util.h for write_to_file code */
  /* write_to_file("task2-payload", ?, ?, FILE_CLEAR); */

  exit(0);
}

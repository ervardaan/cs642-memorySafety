////////////////////////////////////////////////////////////////////////////////
//
//  File           : cs642-task1.c
//  Description    : Task 1
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

  /* Step 1: Fill  buffer with  A's up to return address */

  /* Step 2: Prepare the parameters for printf, i.e. the address */
  /* of your name string on stack - at end payload */

  /* Step 3: Prepare rest of stack to invoke printf and exit cleanly */

  /* Step 4: Write null-terminated "Name:<Your Name>!" in payload next */

  /* Step 5: Write payload for input as input_domain of victim */
  /* see bufferoverflow_util.h for write_to_file code */
  /* write_to_file("task1-payload", ?, ?, FILE_CLEAR); */

  exit(0);
}

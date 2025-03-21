#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

void (*fp)();

struct wizard {
  int hid;
  char *student;
};

void openTheChamber() { printf("Cannot open!\n"); }
void parseltongue() {
  printf("sss Open! sss\n");
  printf("The chamber is now open\n");
}

int main(int argc, char **argv) {
  struct wizard *la, *lb;
  unsigned long long i = 0;

  if (argc != 3) {
    printf("All you need is two argument!\n");
    exit(0);
  }

  fp = openTheChamber;

  la = malloc(sizeof(struct wizard));
  la->hid = ++i;
  la->student = malloc(8);

  lb = malloc(sizeof(struct wizard));
  lb->hid = ++i;
  lb->student = malloc(8);

  free(lb->student);
  free(la->student);

  strcpy(la->student, argv[1]);

  la->student = malloc(8);
  lb->student = malloc(8);

  strcpy(lb->student, argv[2]);

  fp();
  printf("The End!\n");
}

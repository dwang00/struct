#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "headers.h"

void print(struct tdoong group) {
  printf("%s has %d members.", group.name, group.members);
}

struct tdoong example() {
  struct tdoong group;
  srand(time(NULL));
  int x = rand();
  char names[3][11] = {"TWICE", "Red Velvet", "iKon"};
  int members[3] = {9, 5, 7};
  strcpy(group.name, names[x % 3]);
  group.members = members[x % 3];
  return group;
}

struct tdoong edit(struct tdoong group, char *name, int members) {
  strcpy(group.name, name);
  group.members = members;
  return group;
}

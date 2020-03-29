#include "tick.h"

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {

  if (argc <= 1) {
    return 1;
  }

  int secs = atoi(argv[1]);
  timespec_t start, end;
  start = tick();
  sleep(secs);
  end = tick();

  printf("Wall time: %g\n", tick_diff(start, end) / 1e9);

  return 0;
}
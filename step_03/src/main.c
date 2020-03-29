#include "tick.h"

#include <stdio.h>
#include <unistd.h>

int main() {
  timespec_t start, end;
  start = tick();
  sleep(5);
  end = tick();

  printf("Wall time: %g\n", tick_diff(start, end) / 1e9);

  return 0;
}
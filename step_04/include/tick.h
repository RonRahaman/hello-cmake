#ifndef MPCS_HPC_TICK_H
#define MPCS_HPC_TICK_H

#include <time.h>

// Convenience typedef declaration
typedef struct timespec timespec_t;

// Returns a new timespec_t from CLOCK_MONOTONIC
timespec_t tick();

// Returns difference between two timespec_t in nanosec
long tick_diff(timespec_t start, timespec_t end);

#endif // MPCS_HPC_TICK_H

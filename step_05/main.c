#include "stdio.h"

int main() {

  const int n = 10;
  int a[n], b[n];

  for (int i = 0; i < n; ++i) {
    a[i] = i;
  }

  for (int i = 0; i < n; ++i) {
    b[i] = a[i] * 2;
  }

  for (int i = 0; i < n; ++i) {
    printf("%d ", b[i]);
  }
  printf("\n");
}
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int fact(int n) {
  assert(n >= 0);
  int r = 1;
  int i;
  for(i = 2; i <= n; i++) {
    r *= i;
  }
  return r;
}

int main(int argc, char **argv) {
  assert(argc > 1);
  int n = atoi(argv[1]);
  printf("%d! = %d\n", n, fact(n));
}

#include <stdio.h>
int main() {
  int row = 5;
  for (int i = 1; i <= row; i++) {
    for (int j = 5; j >= 6 - i; --j) {
      printf(" %d ", j);
    };
    printf(" \n ");
  }
  return 0;
};

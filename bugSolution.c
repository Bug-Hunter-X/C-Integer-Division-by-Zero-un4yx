#include <stdio.h>

int main() {
  int x = 5;
  int y = 0;
  int z = 0;

  if (y != 0) {
    z = x / y;
    printf("Result: %d\n", z);
  } else {
    printf("Error: Division by zero\n");
  }

  return 0;
} 
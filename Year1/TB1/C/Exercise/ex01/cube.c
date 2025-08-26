#include <stdio.h>

int cube(int n) {
  return n * n * n;
}

int main() {
  int n;
  printf("Enter an integer:\n");
  scanf("%d", &n);
  printf("%d cubed is %d\n", n, cube(n));
  return 0;
}



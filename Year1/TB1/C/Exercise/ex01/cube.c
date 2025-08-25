#include <stdio.h>

int cube(int x) {
  return x * x * x;
}

int main() {
  int x;
  printf("Enter an integer:\n");
  scanf("%d", &x);
  printf("%d cubed is %d\n", x, cube(x));
  return 0;
}



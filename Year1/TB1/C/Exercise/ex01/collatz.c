//
// Created by rache on 25. 8. 26..
//

#include <stdio.h>

int hailstone(int n) {
    int next;
    printf("%d,", n);
    if (n == 1) return 1;
    if (n % 2 == 1) next = 3 * n + 1;
    else next = n / 2;
    return hailstone(next);
}

int main(void) {
    int seed;
    print("Enter seed:\n");
    scanf("%d", &seed);
    printf("We found %d\n", hailstone(seed));
    return 0;
}
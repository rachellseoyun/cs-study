//
// Created by rache on 25. 8. 26..
//

#include <stdio.h>

int remainder(int x, int y) {
    return x % y;
}
int main() {
    int x, y;
    printf("Enter an integer:\n");
    scanf("%d", &x);
    printf("Enter a second integer:\n");
    scanf("%d", &y);
    prinf("The remainder of %d divided by %d is: %d\n", x, y, remainder(x,y));
    return 0;
}
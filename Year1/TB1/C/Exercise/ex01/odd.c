//
// Created by rache on 25. 8. 26..
//
#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer:\n");
    scanf("%d", &n);
    if(n%2==0) printf("%d is even.\n", n);
    else printf("%d is odd.\n", n);
    return 0;
}
//
// Created by rache on 25. 8. 25..
//
#include <stdio.h>

float sphere_area(float r) {
    const float PI = 3.14159;
    return 4 * PI * r * r;
}

int main() {
    float r;
    printf("Enter a float for the radius:\n");
    scanf("%f", &r);
    printf("A sphere with a radius %f has an area of : %f\n", r, sphere_area(r));
    return 0;
}
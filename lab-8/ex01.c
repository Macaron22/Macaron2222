#include <stdio.h>
#define PI 3.14

float calculateCircumference(float radius) {
    return 2 * PI * radius;
}

float calculateArea(float radius) {
    return PI * radius * radius;
}

int main() {
    float radius;
    
    printf("Enter the radius in cm: ");
    scanf("%f", &radius);
    
    float circumference = calculateCircumference(radius);
    float area = calculateArea(radius);
    
    printf("Circumference: %.2f\n", circumference);
    printf("Area: %.2f\n", area);
    
    return 0;
}
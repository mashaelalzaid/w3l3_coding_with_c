#include <stdio.h>

int add(int a, int b);
float float_addition(float a, float);
float area_of_circle(int radius);
int area_of_rectangle(int length, int width);
int factorial(int n);
int main(){
    int a = 4, b=6;
    float x = 2.5, y = 4.3;

    printf("Addition of %d and %d = %d\n", a, b, add(a, b));
    printf("Addition of %f and %f = %f\n", x, y, float_addition(x, y));
    printf("Area of circle with radius %d = %f\n", b, area_of_circle(b));
    printf("Area of rectangle with length %d and width %d = %d\n", a, b, area_of_rectangle(a,b));
    printf("Factorial of %d = %d\n", a, factorial(a));

    return 0;
}

int add(int a, int b) {
    return a + b;
}

float float_addition(float a, float b){

return a+b;

}

float area_of_circle(int radius) {
    float pi = 3.14159;
    return pi * radius * radius;
}

int area_of_rectangle(int length, int width) {
    return length * width;
}

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}


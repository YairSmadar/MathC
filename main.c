#include "Power.c"
#include "basicMath.c"
#include <stdio.h>

int main() { 
    int x;
    scanf("%d" , &x);
    printf("Enter a real number for start the function/n");
    scanf("%d" , &x);
    double ans  ;
    ans = Exp(x) + pow(x,3) -2 ;
    printf("The value of the function F(x) = e^x + x^3 -2 is ");
    ans = 3*x + 2 * pow(x,2);
    printf("The value of the function F(x) = 3x + 2x^2 is ");
    ans = (4 * pow(x,3));
    ans = ans / 5;
    ans = ans - (2 * x);
    printf("The value of the function F(x) = (4x^3)/5 - 2*x is ");


}
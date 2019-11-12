#include <stdio.h>
#include "myMath.h"

int main() { 
    int x;
    char term;
    printf("Enter a real number for start the function\n");
    if(scanf("%d%c", &x, &term) != 2 || term != '\n')
    printf("failure\n");
    else
    printf("valid integer followed by enter key\n");
    double ans  ;
    ans = Exp(x) + Pow(x,3) -2 ;
    printf("The value of the function F(x) = e^x + x^3 -2 is %f\n" ,ans);
    ans = 3*x + 2 * Pow(x,2);
    printf("The value of the function F(x) = 3x + 2x^2 is %f\n" ,ans);
    ans = (4 * Pow(x,3));
    ans = ans / 5;
    ans = ans - (2 * x);
    printf("The value of the function F(x) = (4x^3)/5 - 2*x is %f\n" ,ans);


}

#include <stdio.h>
#include "myMath.h"

int main() { 
    double x;
    char term;
    printf("Enter a real number for start the function\n");
    if(scanf("%lf%c", &x, &term) != 2 || term != '\n')
    printf("Error: You must to enter a number. Try again\n");
    else{
    printf("valid integer followed by enter key\n");
    float ans  ;
    ans = sub(add(Exp(x),Pow(x,3)),2) ;
    printf("The value of the function F(x) = e^x + x^3 -2 is %0.4f\n" ,ans);
    ans = add(mul(x,3),mul(Pow(x,2),2));
    printf("The value of the function F(x) = 3x + 2x^2 is %0.4f\n" ,ans);
    ans = sub(div(mul(Pow(x,3),4),5),mul(x,2));
    printf("The value of the function F(x) = (4x^3)/5 - 2*x is %0.4f\n" ,ans);
    }
   
}
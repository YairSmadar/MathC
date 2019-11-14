#include <stdio.h>
#include "myMath.h"

int main() { 
    double x;
    char term;
    printf("Enter a real number for start the function\n");
    if(scanf("%lf%c", &x, &term) != 2 || term != '\n')
    printf("failure\n");
    else{
    printf("valid integer followed by enter key\n");
    double ans  ;
    ans = sub(add(Exp(x),Pow(x,3)),2) ;
    printf("The value of the function F(x) = e^x + x^3 -2 is %0.4f\n" ,ans);
    ans = add(mul(x,3),mul(2,Pow(x,2)));;
    printf("The value of the function F(x) = 3x + 2x^2 is %0.4f\n" ,ans);
    sub(div(mul(4,Pow(x,3)),5),mul(2,x));
    printf("The value of the function F(x) = (4x^3)/5 - 2*x is %0.4f\n" ,ans);
    }

}
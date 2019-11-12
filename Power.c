#define e 2.71828
#include "myMath.h"

double Exp(int x) {
double ans = e;
int counter = 0 ; 
while (counter != x)
{
    ans = ans * e;
    counter++;
}
return ans;
}

double Pow(double x , int y){
    double ans = x ;
    int counter = 0 ;
    while (counter != y)
    {
        counter++;
       ans = ans * x;
    }
    return ans ;    
    
}

#define e 2.71828
#include "myMath.h"

double Exp(int x) {
double ans = e;
int counter = 0;
if(x==0) return 1;
else if(x>0){ 
    while (counter != x-1)
    {
        ans = ans * e;
     counter++;
    }
}
else if (x<0)
{
    x=x*(-1);
    ans=1/ans;
    double eDiv1 = 1/e;
    while (counter != x-1)
    {
      ans = ans * eDiv1;
        counter++;
    }
}
return ans;
}

double Pow(double x , int y){
    double ans = x ;
    int counter = 0 ;
    if(y==0) return 1;
    else if(y>0){
        while (counter != y-1)
         {
            counter++;
             ans = ans * x;
        }
    }
    else if(y<0){
        ans = 1/ans;
        x=1/x;
        y=y*(-1);
        while(counter < y-1)
        {
            counter++;
            ans = ans * x;
        }
    }
    return ans ;     
}

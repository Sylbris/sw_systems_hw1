#include <stdio.h>
#include "myMath.h"


int main() {
double x;
printf("Please insert a real number: \n");
scanf("%lf", &x);

float func1=sub(add(exponent(x),power(x,3)),2);
float func2=add(mul(x,3),mul(power(x,2),2));
float func3=sub(div(mul(power(x,3),4),5),mul(x,2));


printf("The value of f(x) = e^x+x^3-2 at point %g is: %0.4lf\n",x,func1);
printf("The value of f(x) = 3x+2x^2 at point %g is: %0.4lf\n",x,func2);
printf("The value of f(x) = (4x^3)/5-2x at point %g is: %0.4lf\n",x,func3);

return 0;
}

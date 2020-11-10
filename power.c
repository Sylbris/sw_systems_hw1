#include "myMath.h"


double exponent(int x){
int i=0;
double p=1;
int x_neg=0; //set the negativity of x to be true.

	if(x==0){
		return 1;
	}
	if(x<0) {
	 	x=-x;
	 	x_neg=1;
	}
	while(i<x){
		p=p*EXP;
		i++;
	}
	if(x_neg){//if x is negative
		p=1/p;
	}
	return p;
}
double power(double x, int y){
int i=0;
int y_neg=0;//set the negativity of y to false;
double b=1;

	if(y==0){
		return 1;
	}
	if(y<0) {
	y_neg=1; //y is negative.
	y=-y;
	}
	while(i<y){
		b*=x;
		i++;
	}
	if(y_neg){//if y is negative.
	b=1/b;
	}
return b;
}

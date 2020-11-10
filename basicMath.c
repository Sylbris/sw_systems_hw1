#include "myMath.h"

float add(float x, float y){
	float sum=x+y;
	return sum;
}
float sub(float x, float y){
	float diff=x-y;
	return diff;
}
double mul(double x, int y){
	double prod=y*x;
	return prod;
}
double div(double x, int y){
	if(y!=0){
	return x/y;
	}
	return 0;
}

#include<stdio.h>
#define PI 3.14

float area_circle(float rad)
{
	return(PI*rad*rad);
}


float circum_circle(float rad)
{
	return(2*PI*rad);
}


int main()
{
	float rad,Area,Cir;
	printf("Enter the radius of circle: \n");
	scanf("%f",&rad);
	Area=area_circle(rad);
	Cir=circum_circle(rad);
	printf("Area of a circle= %.2f  , Circumference of a circle = %.2f\n",Area,Cir);
}

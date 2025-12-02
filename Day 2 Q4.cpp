//Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
#define PI 3.141
int main(){
	float radius, area, circumference;
	scanf("%f", radius);
	
	area = PI * radius *radius;
	circumference = 2* PI*radius;
	
	printf("Area=%f, Circumference=%f\n", area, circumference);

    return 0;
	}


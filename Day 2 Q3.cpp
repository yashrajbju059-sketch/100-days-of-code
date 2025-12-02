//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>

int main() {
	int length, breath;
	int area , perimeter;
	scanf("%d %d", &length, &breath);
	 area = length*breath;
	 perimeter = 2*(length+breath);
	 
	 
	 printf("area=%d , perimeter=%d\n", area,perimeter);
	 
	 return 0;
	 
}

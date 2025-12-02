//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>
int main(){
	int totalsecond , hour , mins , second;
	scanf("%d", totalsecond);
	hour = totalsecond / 3600;
    totalsecond = totalsecond % 3600;
    mins = totalsecond / 60;
    second = totalsecond % 60;
    
    printf("%d:%d:%d/n",hour , mins , second);
    return 0;
}


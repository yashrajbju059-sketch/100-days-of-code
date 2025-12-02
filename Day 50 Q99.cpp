//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>

int main() {
    char date[20];
    fgets(date, 20, stdin);
    
    printf("%c%c-", date[0], date[1]);
    
    if (date[3] == '0' && date[4] == '1') printf("Jan-");
    else if (date[3] == '0' && date[4] == '2') printf("Feb-");
    else if (date[3] == '0' && date[4] == '3') printf("Mar-");
    else if (date[3] == '0' && date[4] == '4') printf("Apr-");
    else if (date[3] == '0' && date[4] == '5') printf("May-");
    else if (date[3] == '0' && date[4] == '6') printf("Jun-");
    else if (date[3] == '0' && date[4] == '7') printf("Jul-");
    else if (date[3] == '0' && date[4] == '8') printf("Aug-");
    else if (date[3] == '0' && date[4] == '9') printf("Sep-");
    else if (date[3] == '1' && date[4] == '0') printf("Oct-");
    else if (date[3] == '1' && date[4] == '1') printf("Nov-");
    else if (date[3] == '1' && date[4] == '2') printf("Dec-");
    
    printf("%c%c%c%c", date[6], date[7], date[8], date[9]);
    
    return 0;
}

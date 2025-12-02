//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/

#include <stdio.h>

enum roles {ADMIN, USER, GUEST};

int main() {
    enum roles role = GUEST;
    
    switch(role) {
        case ADMIN:
            printf("Welcome Administrator!");
            break;
        case USER:
            printf("Welcome User!");
            break;
        case GUEST:
            printf("Welcome Guest!");
            break;
    }
    
    return 0;
}

//Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[3];
    
    for(int i = 0; i < 3; i++) {
        scanf("%s", students[i].name);
        scanf("%d", &students[i].roll_no);
        scanf("%f", &students[i].marks);
    }
    
    int max_index = 0;
    for(int i = 1; i < 3; i++) {
        if(students[i].marks > students[max_index].marks) {
            max_index = i;
        }
    }
    
    printf("Topper: %s (Marks: %.2f)", students[max_index].name, students[max_index].marks);
    
    return 0;
}

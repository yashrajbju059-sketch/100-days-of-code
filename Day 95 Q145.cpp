//Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student findTopStudent(struct Student students[], int n) {
    int max_index = 0;
    for(int i = 1; i < n; i++) {
        if(students[i].marks > students[max_index].marks) {
            max_index = i;
        }
    }
    return students[max_index];
}

int main() {
    struct Student students[3];
    
    for(int i = 0; i < 3; i++) {
        scanf("%s", students[i].name);
        scanf("%d", &students[i].roll_no);
        scanf("%f", &students[i].marks);
    }
    
    struct Student top = findTopStudent(students, 3);
    printf("Top Student: %s | Roll: %d | Marks: %.2f", top.name, top.roll_no, top.marks);
    
    return 0;
}

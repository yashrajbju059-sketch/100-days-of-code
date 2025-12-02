//Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee emp_write = {"John", 101, 50000.0};
    struct Employee emp_read;
    
    FILE *file = fopen("employee.dat", "wb");
    fwrite(&emp_write, sizeof(struct Employee), 1, file);
    fclose(file);
    
    file = fopen("employee.dat", "rb");
    fread(&emp_read, sizeof(struct Employee), 1, file);
    fclose(file);
    
    printf("Name: %s\nID: %d\nSalary: %.2f", emp_read.name, emp_read.id, emp_read.salary);
    
    return 0;
}

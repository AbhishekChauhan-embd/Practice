#include <stdio.h>

#define NUM_EMPLOYEES 9

extern int exnum;
// Define the structure for a table row
struct Employee {
    int id;
    char name[20];
    float salary;
};

int main() {

    printf("exnum : %d\n",exnum++);
    printf("exnum : %d\n",exnum);
    /*
    struct Employee table[NUM_EMPLOYEES] = {
        {101, "Alice", 50000.0},
        {102, "Bob", 60000.5},
        {103, "Charlie", 55000.3},
        {104, "Abhi", 50000.0},
        {105, "Sonu", 60000.5},
        {106, "Monu", 55000.3},
        {107, "Tinku", 50000.0},
        {108, "Abhishek Chuahan", 60000.5},
        {109, "Lalima", 55000.3}
    };

    // Print the table
    printf("ID   Name       Salary\n");
    printf("-------------------------\n");
    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        printf("%d   %-10s %.2f\n", table[i].id, table[i].name, table[i].salary);
    }

    */
    return 0;
}
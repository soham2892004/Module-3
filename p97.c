 #include <stdio.h>

#define MAX_EMPLOYEES 5


struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};


void inputEmployeeData(struct Employee *emp);
void displayEmployeeData(const struct Employee *emp);

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    
    
    for (int i = 0; i < MAX_EMPLOYEES; i++) {
        printf("Enter information for employee %d:\n", i + 1);
        inputEmployeeData(&employees[i]);
    }
    
    
    printf("\nEmployee Information:\n");
    for (int i = 0; i < MAX_EMPLOYEES; i++) {
        printf("\nDetails of employee %d:\n", i + 1);
        displayEmployeeData(&employees[i]);
    }
    
    return 0;
}


void inputEmployeeData(struct Employee *emp) {
    printf("Employee Number: ");
    scanf("%d", &emp->empno);
    getchar(); 

    printf("Employee Name: ");
    fgets(emp->empname, sizeof(emp->empname), stdin);
    
    emp->empname[strcspn(emp->empname, "\n")] = '\0';

    printf("Address: ");
    fgets(emp->address, sizeof(emp->address), stdin);

    emp->address[strcspn(emp->address, "\n")] = '\0';

    printf("Age: ");
    scanf("%d", &emp->age);
    getchar(); 
}


void displayEmployeeData(const struct Employee *emp) {
    printf("Employee Number: %d\n", emp->empno);
    printf("Employee Name: %s\n", emp->empname);
    printf("Address: %s\n", emp->address);
    printf("Age: %d\n", emp->age);
}

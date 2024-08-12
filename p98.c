 #include <stdio.h>


struct Employee 
{
    int empno;
    char empname[50];
    float salary;
};


union Data 
{
    int i;
    float f;
    char str[20];
};

void  main() {
    
    struct Employee emp;
    emp.empno = 101;
    snprintf(emp.empname, sizeof(emp.empname), "ram sharma");
    emp.salary = 50000;

    
    union Data data;
    data.i = 10; 

    
    printf("Size of struct Employee: %lu bytes\n", sizeof(emp));
    printf("Size of union Data: %lu bytes\n", sizeof(data));
    
    
    printf("Structure Employee Details:\n");
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Employee Salary: %.2f\n", emp.salary);
    
    
    printf("\nUnion Data Details:\n");
    printf("Initial Integer Value: %d\n", data.i);
    
    
    data.f = 220.5;
    printf("Union Float Value after modification: %.2f\n", data.f);
    printf("Union Integer Value after modification: %d\n", data.i);
    
    
    snprintf(data.str, sizeof(data.str), "Hello");
    printf("Union String Value after modification: %s\n", data.str);
    printf("Union Float Value after modifying string: %.2f\n", data.f); 
    

}

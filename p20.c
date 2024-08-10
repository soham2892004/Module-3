#include <stdio.h>

void main() {
    int  salary, insurance, loanInstallment;
    float remainingSalary;


    printf("Enter your monthly salary: ");
    scanf("%d", &salary);


    insurance = salary * 0.10;
    loanInstallment = salary * 0.10;


    remainingSalary = salary - (insurance + loanInstallment);


    printf("Insurance Deduction: %d", insurance);
    printf("Loan Installment Deduction: %d", loanInstallment);
    printf("Remaining Salary: %.2f", remainingSalary);


}

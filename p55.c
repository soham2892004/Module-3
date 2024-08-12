 #include <stdio.h>

void main() {
    float basicSalary, hra, da, grossSalary;

    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);

    if (basicSalary <= 10000) {
        hra = 0.2 * basicSalary;
        da = 0.8 * basicSalary;
    } else if (basicSalary <= 20000) {
        hra = 0.25 * basicSalary;
        da = 0.9 * basicSalary;
    } else {
        hra = 0.3 * basicSalary;
        da = 0.95 * basicSalary;
    }

    grossSalary = basicSalary + hra + da;

    printf("Gross salary: %.2f\n", grossSalary);
}

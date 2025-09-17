#include <stdio.h>

int main() {
    float employee_basic_salary, house_rent_allowance, dearness_allowance, gross_salary;

    printf("Enter basic salary: ");
    scanf("%f", &employee_basic_salary);

    house_rent_allowance = 0.10 * employee_basic_salary;
    dearness_allowance = 0.05 * employee_basic_salary;
    gross_salary = employee_basic_salary + house_rent_allowance + dearness_allowance;

    printf("Gross salary = %.2f\n", gross_salary);

    return 0;
}

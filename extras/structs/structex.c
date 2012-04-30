#include <stdio.h>

struct database {
    int id_number;
    int age;
    float salary;
};

int main()
{
    struct database employee;

    employee.age = 28;
    employee.id_number = 1;
    employee.salary = 12000.21;

    return 0;
}

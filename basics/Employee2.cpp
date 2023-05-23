#include <iostream>
#include <vector>
#include "employee.h"

void addEmployee(std::vector <Employee> &employee)
{
    for (auto member: employee)
    {
        
    }
}

int main() 
{
    Employee employee("Omar", "Abd El-Aleem", 22, "300111001", 1000, true);
    employee.Display();
    return 0;
}
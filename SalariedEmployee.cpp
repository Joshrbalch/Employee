#include <iostream>
#include <string>
#include "SalariedEmployee.h"

SalariedEmployee::SalariedEmployee(const std::string &first, const std::string &last, const std::string &ssn, double salary) : Employee(first, last, ssn) {
    setWeeklySalary(salary);
}
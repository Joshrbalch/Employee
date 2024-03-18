#include "SalariedEmployee.h"

SalariedEmployee::SalariedEmployee(const std::string& firstName, const std::string& lastName, int salary)
    : Employee(firstName, lastName), weeklySalary(salary) {}

double SalariedEmployee::getEarning() const {
    return weeklySalary; // Return the weekly salary
}

std::string SalariedEmployee::getInfo() const {
    return "Salaried Employee: " + getFirstName() + " " + getLastName(); // Return employee's full name
}

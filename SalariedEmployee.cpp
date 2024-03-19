#include "SalariedEmployee.h"

SalariedEmployee::SalariedEmployee(const std::string& firstName, const std::string& lastName, int salary)
    : Employee(firstName, lastName), weeklySalary(salary) {}

double SalariedEmployee::getEarning() const {
    return weeklySalary; // Return the weekly salary
}

std::string SalariedEmployee::getInfo() const {
    // Return employee's full name and weekly salary
    return "Salaried Employee: " + getFirstName() + " " + getLastName() + "\nweekly salary: " + to_string(weeklySalary); // Return employee's full name
}


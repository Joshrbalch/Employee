#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee(const std::string& firstName, const std::string& lastName, int hours, double rate)
    : Employee(firstName, lastName), hoursWorked(hours), hourlyRate(rate) {}

double HourlyEmployee::getEarning() const {
    return hoursWorked * hourlyRate; // Calculate weekly earnings based on hours worked and hourly rate
}

std::string HourlyEmployee::getInfo() const {
    return "Hourly Employee: " + getFirstName() + " " + getLastName(); // Return employee's full name
}

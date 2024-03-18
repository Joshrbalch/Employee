#include "HourlyEmployee.h"

#include <iostream>

HourlyEmployee::HourlyEmployee(const std::string& firstName, const std::string& lastName, int hours, double rate)
    : Employee(firstName, lastName), hoursWorked(hours), hourlyRate(rate) {}

double HourlyEmployee::getEarning() const {
    if(hoursWorked <= 40) // If hours worked is less than or equal to 40
        return hoursWorked * hourlyRate; // Calculate weekly earnings based on hours worked and hourly rate
    else if(hoursWorked > 40 && hoursWorked <= 50) // If hours worked is greater than 40
        return (40 * hourlyRate) + ((hoursWorked - 40) * hourlyRate * 1.5); // Calculate weekly earnings based on hours worked and hourly rate with overtime
    else if(hoursWorked > 50) // If hours worked is greater than 50
        return (40 * hourlyRate) + (10 * hourlyRate * 1.5) + ((hoursWorked - 50) * hourlyRate * 2); // Calculate weekly earnings based on hours worked and hourly rate with double overtime
    else
        return 0; // Return 0
    
}

std::string HourlyEmployee::getInfo() const {
    return "Hourly Employee: " + getFirstName() + " " + getLastName() + "\n" + "hours worked: " + to_string(hoursWorked) + ", hourly rate: " + to_string(hourlyRate); // Return employee's full name
}

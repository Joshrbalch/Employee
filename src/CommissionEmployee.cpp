#include "CommissionEmployee.h"

CommissionEmployee::CommissionEmployee(const std::string& firstName, const std::string& lastName, int sales, double rate, int minimalPay)
    : Employee(firstName, lastName), salesAmount(sales), commissionRate(rate), minimalWeeklyPay(minimalPay) {}

double CommissionEmployee::getEarning() const {
    double earning = salesAmount * commissionRate;
    return (earning > minimalWeeklyPay) ? earning : minimalWeeklyPay; // Ensure minimal weekly pay
}

std::string CommissionEmployee::getInfo() const {
    return "Commission Employee: " + getFirstName() + " " + getLastName(); // Return employee's full name
}

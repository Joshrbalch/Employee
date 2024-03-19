#include "CommissionEmployee.h"
#include <iomanip>
#include <sstream>

CommissionEmployee::CommissionEmployee(const std::string& firstName, const std::string& lastName, int sales, double rate, int minimalPay)
    : Employee(firstName, lastName), salesAmount(sales), commissionRate(rate), minimalWeeklyPay(minimalPay) {}

double CommissionEmployee::getEarning() const {
    double earning = salesAmount * commissionRate;
    if(earning < minimalWeeklyPay) // If earning is less than minimal weekly pay
        return minimalWeeklyPay; // Return minimal weekly pay
    else
        return salesAmount * commissionRate; // Return earning
}

std::string CommissionEmployee::getInfo() const {
    stringstream ss; // Create a stringstream
    ss << fixed << setprecision(2) << commissionRate; // Add commission rate to the stream to set precision
    // Return employee's full name, minimal weekly pay, sales amount, and commission rate
    return "Commission Employee: " + getFirstName() + " " + getLastName() + "\nminimum salary: " + to_string(minimalWeeklyPay) + ", sales amount: " + to_string(salesAmount) + ", commission rate: " + ss.str() + "%";
}

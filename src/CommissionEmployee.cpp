#include "CommissionEmployee.h"

CommissionEmployee::CommissionEmployee(const std::string& firstName, const std::string& lastName, int sales, double rate, int minimalPay)
    : Employee(firstName, lastName), salesAmount(sales), commissionRate(rate), minimalWeeklyPay(minimalPay) {}

double CommissionEmployee::getEarning() const {
    double earning = salesAmount * commissionRate;
    if(earning < minimalWeeklyPay) // If earning is less than minimal weekly pay
        return minimalWeeklyPay; // Return minimal weekly pay
    else
        return earning; // Return earning
}

std::string CommissionEmployee::getInfo() const {
    return "Commission Employee: " + getFirstName() + " " + getLastName() + "\nminimum salary: " + to_string(minimalWeeklyPay) + ", sales amount: " + to_string(salesAmount) + ", commission rate: " + to_string(commissionRate) + "%"; // Return employee's full name
}

#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H

#include "Employee.h"
#include <string>

using namespace std;

class CommissionEmployee : public Employee {
private:
    int salesAmount; // Sales amount made in a week
    double commissionRate; // Commission rate
    int minimalWeeklyPay; // Minimal weekly pay

public:
    CommissionEmployee(const string& firstName, const string& lastName, int sales, double rate, int minimalPay);
    virtual double getEarning() const override;
    virtual string getInfo() const override;
};

#endif // COMMISSIONEMPLOYEE_H

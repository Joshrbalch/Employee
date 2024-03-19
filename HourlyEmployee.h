#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

#include "Employee.h"
#include <string>

using namespace std;

class HourlyEmployee : public Employee {
private:
    int hoursWorked; // Number of hours worked
    double hourlyRate; // Hourly pay rate

public:
    HourlyEmployee(const string& firstName, const string& lastName, int hours, double rate);
    virtual double getEarning() const override;
    virtual string getInfo() const override;
};

#endif // HOURLYEMPLOYEE_H

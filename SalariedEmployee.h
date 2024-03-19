#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include "Employee.h"
#include <string>

using namespace std;

class SalariedEmployee : public Employee {
private:
    int weeklySalary; // Weekly salary of the salaried employee

public:
    SalariedEmployee(const string& firstName, const string& lastName, int salary);
    virtual double getEarning() const override;
    virtual string getInfo() const override;
};

#endif // SALARIEDEMPLOYEE_H

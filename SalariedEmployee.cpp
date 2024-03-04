#include "Employee.h"
#include <string>
#include <iostream>

using namespace std;

class SalariedEmployee : public Employee {
    public:
        SalariedEmployee(const string& first, const string& last, double salary);
        void setSalary(double salary);
        double getSalary() const;
        string getInfo() const;
};
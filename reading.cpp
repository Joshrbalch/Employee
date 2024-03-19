#include "Employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "HourlyEmployee.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

void readSalaried(vector<Employee*> *employees, string line) {
    stringstream ss(line);
    string firstName, lastName, type;
    int salary;
    ss >> type >> firstName >> lastName >> salary;
    SalariedEmployee *employee = new SalariedEmployee(firstName, lastName, salary);
    employees->push_back(employee);
}

void readCommission(vector<Employee*> *employees, string line) {
    stringstream ss(line);
    string firstName, lastName, type;
    int minPay, sales;
    double commissionRate;
    ss >> type >> firstName >> lastName >> minPay >> sales >> commissionRate;
    CommissionEmployee *employee = new CommissionEmployee(firstName, lastName, sales, commissionRate, minPay);
    employees->push_back(employee);
}

void readHourly(vector<Employee*> *employees, string line) {
    stringstream ss(line);
    string firstName, lastName, type;
    int hours;
    double wage;
    ss >> type >> firstName >> lastName >> hours >> wage;
    HourlyEmployee *employee = new HourlyEmployee(firstName, lastName, hours, wage);
    employees->push_back(employee);
}

vector<Employee*> *readFrom(string filename) {
    ifstream file;
    file.open(filename);

    if (!file.is_open()) {
        cout << "Error: file not found" << endl;
        return nullptr;
    }

    vector<Employee*> *employees = new vector<Employee*>;

    string line;
    
    while (getline(file, line)) {
        if(line[0] == 's') {
            readSalaried(employees, line);
        } 
        
        else if(line[0] == 'c') {
            readCommission(employees, line);
        } 
        
        else if(line[0] == 'h') {
            readHourly(employees, line);
        }
    }

    file.close();

    return employees;
}

// int main() {
//     readFrom("employees.dat");
//     return 0;
// }
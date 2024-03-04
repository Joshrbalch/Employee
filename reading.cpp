#include "reading.h"
#include "employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "HourlyEmployee.h"
#include <iostream>
#include <fstream>

using namespace std;

void readSalaried(ifstream &file, vector<Employee*> *employees) {
    string line;
    while (getline(file, line)) {
        SalariedEmployee *employee = new SalariedEmployee();
        employee->fromString(line);
        employees->push_back(employee);
    }
}

void readCommission(ifstream &file, vector<Employee*> *employees) {
    string line;
    while (getline(file, line)) {
        CommissionEmployee *employee = new CommissionEmployee();
        employee->fromString(line);
        employees->push_back(employee);
    }
}

void readHourly(ifstream &file, vector<Employee*> *employees) {
    string line;
    while (getline(file, line)) {
        HourlyEmployee *employee = new HourlyEmployee();
        employee->fromString(line);
        employees->push_back(employee);
    }
}

vector<Employee*> *readFrom(string filename) {
    ifstream file;
    file.open(filename);

    if (!file.is_open()) {
        cout << "Error: file not found" << endl;
        return nullptr;
    }

    vector<Employee*> *employees = new vector<Employee*>();

    string line;
    
    while (getline(file, line)) {
        if(line == "Salaried") {
            readSalaried(file, employees);
        } 
        
        else if(line == "Commission") {
            readCommission(file, employees);
        } 
        
        else if(line == "Hourly") {
            readHourly(file, employees);
        }
        Employee *employee = new Employee();
        employee->fromString(line);
        employees->push_back(employee);
    }
}
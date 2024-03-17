#include "Employee.h"
#include "CommissionEmployee.h"

CommissionEmployee::CommissionEmployee(const std::string&, const std::string&, double = 0.0, double = 0.0);

CommissionEmployee::~CommissionEmployee() = default; // compiler generates virtual destructor

   void setCommissionRate(double);
   double getCommissionRate() const;

   void setGrossSales(double);
   double getGrossSales() const;

   virtual double getEarning() const override; // calculate earnings
   virtual std::string getInfo() const override; // virtual
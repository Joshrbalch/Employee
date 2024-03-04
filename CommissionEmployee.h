#ifndef _COMMISSIONEMPLOYEE_H
#define _COMMISSIONEMPLOYEE_H

#include <string> // Include the necessary header file(s)

class CommissionEmployee : public Employee {
public:
   CommissionEmployee(const std::string&, const std::string&, double = 0.0, double = 0.0);
   virtual ~CommissionEmployee() = default; // compiler generates virtual destructor

   void setCommissionRate(double);
   double getCommissionRate() const;

   void setGrossSales(double);
   double getGrossSales() const;

   virtual double getEarning() const override; // calculate earnings
   virtual std::string getInfo() const override; // virtual
}; // end class CommissionEmployee

#endif
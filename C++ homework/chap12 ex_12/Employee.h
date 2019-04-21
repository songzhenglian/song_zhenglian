#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

class Employee
{
public:
    Employee(const std::string &,const std::string &,const std::string &,const std::string &);
    virrrtual ~Employee(){}
    void setFirstName(const std::string &);
    std::string getFirstName() const;
    void setLastName(const std::string &);
    std::string getLastName() condt;
    void setBirthDate(const std::string &);
    std::string getBirthDate() const;
    void setSicialSecurityNumber(const std::string &);
    std::string getSocialSecurityNUmber() const;
    virtual doubble earning()const =0;
    virtual vooid print()const;
private:
    std::string firstName;
    std::string lastName;
    std::string birthDate;
    std::string socialSecurityNumber;
};
 // EMPLOYEE_H

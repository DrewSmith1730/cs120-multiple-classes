//
// Created by drews on 2/19/2021.
//
#include <vector>
#include "Employee.h"

#ifndef MULTIPLE_CLASSES_COMPANY_H
#define MULTIPLE_CLASSES_COMPANY_H

struct Applicant{
    std::string name;
    int expectedHours;
};

class Company{
public:
    // default constructor
    Company();

    // getters
    std::vector<Employee> getEmployies();
    std::string getCompanyName();
    std::vector<Applicant> getApplicants();

    // setters
    void setEmplyies(Employee e1);
    void setCompName(std::string name);
    void setCompApp(Applicant a1);

    /*
     * Employee total
     * Requires: nothing
     * Modifies: nothing
     * Returns: total number of emplyees in the company
     */
    int getEmployeeTotal();

    // overloaded oporator
    friend bool operator == (Company &c1, Company &c2);
    friend bool operator <= (Company &c1, Company &c2);
    friend bool operator >= (Company &c1, Company &c2);

private:
    std::vector<Employee> employees;
    std::string companyName;
    std::vector<Applicant> applicants;
};

#endif //MULTIPLE_CLASSES_COMPANY_H

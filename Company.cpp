//
// Created by drews on 2/19/2021.
//
#include "Company.h"

using namespace std;

Company::Company() {
    vector<Employee> employees;
    companyName = "Something important sounding inc";
}

vector<Employee> Company::getEmployies() {
    return employees;
}

string Company::getCompanyName() {
    return companyName;
}

vector<Applicant> Company::getApplicants(){
    return applicants;
}

void Company::setEmplyies(Employee e1) {
    employees.push_back(e1);
}

void Company::setCompName(std::string name) {
    companyName = name;
}

void Company::setCompApp(Applicant a1) {
    applicants.push_back(a1);
}

int Company::getEmployeeTotal() {
    return employees.size();
}

bool operator == (Company &c1, Company &c2){
    return c1.getEmployeeTotal() == c2.getEmployeeTotal();
}

bool operator >= (Company &c1, Company &c2){
    return c1.getEmployeeTotal() >= c2.getEmployeeTotal();
}

bool operator <= (Company &c1, Company &c2){
    return c1.getEmployeeTotal() <= c2.getEmployeeTotal();
}
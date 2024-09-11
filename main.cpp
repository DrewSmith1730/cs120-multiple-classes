//
// Created by drews on 2/12/2021.
//
#include <iostream>
#include <string>
#include "Employee.h"
#include "Company.h"

using namespace std;

int main(){
    Company BurgerKing;
    Company McDonalds;

    // creates and adds employees to the company vector
    Employee Jason;
    Employee Danial("Danial", Employee::Stocker, 35);
    Employee Morgan("Morgan", Employee::Manager, 45);
    BurgerKing.setEmplyies(Jason);
    BurgerKing.setEmplyies(Danial);
    BurgerKing.setEmplyies(Morgan);
    McDonalds.setEmplyies(Jason);

    // creates and adds applicants to the company vector
    Applicant applicant1;
    Applicant applicant2;
    applicant1.name = "John Smith";
    applicant1.expectedHours = 40;
    applicant2.name = "Daniel Tosh";
    applicant2.expectedHours = 20;
    BurgerKing.setCompApp(applicant1);
    BurgerKing.setCompApp(applicant2);

    // compare employees
    cout << "Checking which employee's are more important then the others" << endl;
    if (Jason <= Danial){
        cout << "Danial is greater then Jason" << endl;
    } else {
        cout << "Jason is greater then Danial" << endl;
    }
    cout << "Checking if Burger King or McDonalds has more employees" << endl;
    if (BurgerKing >= McDonalds){
        cout << "BurgerKing has more employees then McDonalds" << endl;
    } else {
        cout << "McDonalds has more employees then Burgerking" << endl;
    }




    return 0;
}

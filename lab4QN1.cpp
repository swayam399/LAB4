/*1. Assume class person stores the Name, Age and ID, class employee 
stores the designation, basic salary, total overtime(hr) in a month 
and hourly rate and class computedSalary stores the total salary of 
the employee. Implement above concept using appropriate inheritance.*/
#include<iostream>
using namespace std;
class person
{
   
  public:
  string name;
   int age, ID;
  void setdata1(){
    cout<<"Enter Name of the employee: ";
    getline(cin,name);
    cout<<"Enter Age: ";
    cin>>age;
    cout<<"Enter ID: ";
    cin>> ID;
}
};
class Employee : public person 

{
    
    public:
    int basic_salary,overtime,overtime_rate;
    void setdata2(){
        cout<<"Enter the salary of "<<name <<":";
        cin>>basic_salary;
        cout<<"Enter the overtime hour of "<<name<<"(in hour) : ";
        cin>>overtime;
        cout<<"Enter the hourly rate for the employee:";
        cin>>overtime_rate;
    }
};
class salary : public Employee{
int total_salary;
public:
void totalsalary(){
    total_salary = basic_salary + overtime * overtime_rate;
}
void display(){
    
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;;
    cout<<"Employee ID: "<<ID<<endl;
    cout<<"Monthly salary : "<<total_salary;
}
};
int main()
{
    salary employee;
    employee.setdata1();
    employee.setdata2();
    employee.totalsalary();
    employee.display();
return 0;
}
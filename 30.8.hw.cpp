#include <iostream>

using namespace std;

class Employee {
    
  private: // access identifier
  int employee_id;
  string name;
  int month_salary;
  string address;
  
 
  public:
  Employee() {
    employee_id = 101;
  	name = "Sneha";
  	month_salary = 1000;
  	address = "abc";
  }
 
  Employee(int employee_id, string name, int month_salary , string address) {
  	this->employee_id = employee_id;
  	this->name = name;
  	this->month_salary = month_salary;
  	this->address = address;
  }
  
  Employee(int month_salary , string address) {
    employee_id = 103;
  	name = "PQR";
  	this->month_salary = month_salary;
  	this->address = address;
 	 
  }
  
  int get_employee_id() {
  	return this -> employee_id;
  }
    
  string get_name() {
  	return this -> name;
  }
  
  int get_month_salary() {
  	return this -> month_salary;
  }
  
  string get_address() {
  	return this -> address;
  }
 
  
  void print_employee() {
  	cout<<this->employee_id<<" "<<this->name<<" "<<this->month_salary<<" "<<this->address<<endl;
  }
  
  int calculate_annual_salary() {
  	int annual_salary = this->month_salary*12;
  	return annual_salary;
  }
    
};



int main()
{
	Employee e1 = Employee();
	Employee e2 = Employee(102,"DEF", 2000, "def");
	Employee e3 = Employee(3000, "pqr");
	Employee e4 = Employee(104,"XYZ", 5000, "xyz");

	e1.print_employee();
	cout<<"annual salary of e1 -> "<<e1.calculate_annual_salary()<<endl;
	e2.print_employee();
	cout<<"annual salary of e1 -> "<<e2.calculate_annual_salary()<<endl;
	e3.print_employee();
	cout<<"annual salary of e1w -> "<<e3.calculate_annual_salary()<<endl;
	e4.print_employee();
	cout<<"annual salary of e1 -> "<<e4.calculate_annual_salary()<<endl;
    
    

	return 0;
}

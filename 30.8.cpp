/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class Student {
    
  private: // access identifier
  string name;
  int roll_number;
  //take another member for marks 
  //
  
  public:
  Student() {
      name = "Sneha";
      roll_number = 1;
  }
  
  Student(string name, int roll_number) {
      this->name = name;
      this->roll_number = roll_number;
  }
  //new constrcture that takes marks
  Student(string name, int roll_number, ....) {
      this->name = name;
      this->roll_number = roll_number;
      
  }
    
  string get_name() {
      return this -> name;
  }
  
  //write a method that prints studen details
  void print() {
      //details of studentr
  }
    
};



int main()
{
    Student s = Student("Sneha", 1);
    s.print();
    
    cout<<s.get_name();

    return 0;
}
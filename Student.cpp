#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int no,char na[]) {
  studentId = no;
  strcpy(name,na);
  
  
}

// Display StudentId and Name
void Student::display() {
  cout<<" studentId "<<studentId<<endl;
  cout<<" studentname "<<name<<endl;
  
}

#include <iostream>
#include <fstream>
using namespace std;

class Employee
   {
     public:
        string Name;
        int Employee_ID;
        int Salary;
  };
int main(){
   Employee Emp_1;
   Emp_1.Name="abhijit";
   Emp_1.Employee_ID=2563;
   Emp_1.Salary=15600;
   
   //Wriring this data to Employee.txt
   
   ofstream file1;
   file1.open("Employee.txt", ios::app);
   file1.write((char*)&Emp_1,sizeof(Emp_1));
   file1.close();
   
   //Reading data from Employee.txt
   
   ifstream file2;
   file2.open("Employee.txt",ios::in);
   file2.read((char*)&Emp_1,sizeof(Emp_1));
   cout<<"\nName : "<<Emp_1.Name<<endl;
    cout<<"\nEmployee ID : "<<Emp_1.Employee_ID<<endl;
   cout<<"\nSalary : " <<Emp_1.Salary<<endl;
   file2.close();
   return 0;
}


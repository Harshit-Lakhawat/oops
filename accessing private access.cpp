#include <iostream>
#include <string>
using namespace std;
class teacher {
private:     
  double salary;

public: 
  string name;
  string dept;
  string sub;
  
  void changedept(string newdept) { 
          dept = newdept; 
  }
void setsalary(double s){
        this->salary= s;
}
double getsalary(){
        return this-> salary ;
}
};
int main() {
  teacher t1;
  t1.name = "harshit";
  t1.sub = "c++";
  t1.dept = "cs";
  //t1.salary = 100000000;
  cout << "name is :-> " << t1.name << endl;
 // cout << "salary is :-> " << t1.salary << endl;
  cout << "department :-> " << t1.dept << endl;
t1.setsalary(121212);
  cout << "salary is "<< t1.getsalary()<<endl;
return 0;
}

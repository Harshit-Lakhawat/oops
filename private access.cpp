#include <iostream>
#include <string>
using namespace std;
class teacher {
//private:     //agar comment me ni rakhte hto error aayegi
                                        //private vali.
  //double salary;

public: 
  string name;
  string dept;
  string sub;
  
  void changedept(string newdept) { dept = newdept; }
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
  return 0;
}

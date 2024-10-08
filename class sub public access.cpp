#include <iostream>
#include <string>
using namespace std;
class teacher {
public: // agar private access modifier use krenge to error dega. public me data
        // is accessible to everyone
  string name;
  string dept;
  string sub;
  double salary;
  void changedept(string newdept) { dept = newdept; }
};
int main() {
  teacher t1;
  t1.name = "harshit";
  t1.sub = "c++";
  t1.dept = "cs";
  t1.salary = 100000000;
  cout << "name is :-> " << t1.name << endl;
  cout << "salary is :-> " << t1.salary << endl;
  cout << "department :-> " << t1.dept << endl;
  return 0;
}

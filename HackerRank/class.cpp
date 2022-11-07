#include <iostream>
#include <sstream>
#include <string>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
struct Student_data{
  int age;
  string fName;
  string lName;
  int standard;
};
class Student
{
  Student_data p;
  public:
  void set_age(int x)
  {
      p.age=x;
  }
  void set_standard(int y)
  {
      p.standard=y;
  }
  void set_first_name(string z)
  {
      p.fName.assign(z);
  }
  void set_last_name(string v)
  {
      p.lName.assign(v);
  }
  int get_age()
  {
      return p.age;
  }
  string get_last_name()
  {
    return p.lName;  
  }
  string get_first_name()
  {
      return p.fName;
  }
  int get_standard()
  {
      return p.standard;
  }
};
int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.get_age()<<","<<st.get_first_name()<<","<<st.get_last_name()<<","<<st.get_standard();
    
    return 0;
}
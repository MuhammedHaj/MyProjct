#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Person
{
    public:
    string name;
    int age;
    virtual int getdata() = 0;
    virtual void putdata() = 0;
};
class Professor : public Person
{
    static int cur_id;
    int posts;
    int x;
    public:
    Professor()
    {
        cur_id=cur_id+1;
    }
    int getdata()
    {
        x=cur_id;
        cin>>name>>age>>posts;
        return 0;
    }
    void putdata()
    {
        cout<<name<<" "<<age<<" "<<posts<<" "<<x<<endl;
    }
};
int Professor::cur_id=0;
class Student : public Person
{
    static int cur_id1;
    int sum=0;
    int subject[6];
    int x;
    public:
    Student()
    {
        cur_id1=cur_id1+1;
    }
    int getdata()
    {
        x=cur_id1;
        cin>>name>>age;
        for (int i=0; i<6; i++) 
        {cin>>subject[i];
        sum=sum+subject[i];}
        return 0;
    }
    void putdata()
    {
        cout<<name<<" "<<age<<" "<<sum<<" "<<x<<endl;
    }
};
int Student::cur_id1=0;
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}

#include <iostream>

using namespace std;

int main()
{
    string name[5],number[5]={"first","second","third","fourth","fifth"};
    int age[5],id[5],level[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Enter the "<<number[i]<<" student name :";
        cin>>name[i];
        cout<<"Enter the "<<number[i]<<" student age :";
        cin>>age[i];
        cout<<"Enter the "<<number[i]<<" student id :";
        cin>>id[i];
        cout<<"Enter the "<<number[i]<<" student level :";
        cin>>level[i];
        cout<<"The "<<number[i]<<" student name is :"<<name[i]<<endl;
        cout<<"The "<<number[i]<<" student age is :"<<age[i]<<endl;
        cout<<"The "<<number[i]<<" student id is :"<<id[i]<<endl;
        cout<<"The "<<number[i]<<" student level is :"<<level[i]<<endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=5;i++)
    {
        for(int j=0;j<5-i;j++)
        {
            cout<<" ";
        }
        for(int a=0;a<i;a++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
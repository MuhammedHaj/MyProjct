#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int columns,rows;
    cout<<"Enter number of rows\n";
    cin>>rows;
    columns=rows+rows+1;
        for(int i=1;i<=rows;i++)
        {
            for(int j=(floor(columns/2)-(i-1));j>0 ;j--)
            {
                cout<<" ";
            }
            for(int j=1; j<2*i ;j++)
            {
                cout<<"*";
            }
            for(int j=(floor(columns/2)-(i-1));j>0 ;j--)
            {
                cout<<" ";
            }
            cout<<"\n";
        }
}
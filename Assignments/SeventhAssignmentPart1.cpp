#include<iostream>
using namespace std;
int main()
{
    int x,arr[x];
    cout<<"Enter number of element\n";
    cin>>x;
    for(int i=0;i<x;i++)
    {
        cout<<"Enter element ["<<i+1<<"] :";
        cin>>*(arr+i);
    }
    for(int i=x-1;i>=0;i--)
    cout<<arr[i]<<endl;
}
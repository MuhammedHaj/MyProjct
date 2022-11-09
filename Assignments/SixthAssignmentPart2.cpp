#include<iostream>
using namespace std;
void Reverse(int *arr,int count)
{
    for(int i=count-1;i>=0;i--)
    {
        cout<<*(arr+i)<<endl;
    }
}
int main()
{
    int count,arr[count];
    cout<<"Enter the number of digits of the array\n";
     cin>>count;
     cout<<"Enter the digits\n";
     for(int i=0 ;i<count;i++)
     {
        cin>>arr[i];
     }
     cout<<"--------------------\n";
     Reverse(arr,count);
}
#include<iostream>
using namespace std;
void Reverse(int arr[],int count)
{
    int list[count];
    for(int i=count-1;i>=0;i--)
    {
        static int j=0;
        list[j]=arr[i];
        j++;
    }
    for(int i=0 ;i<count;i++)
    {
        arr[i]=list[i];
    }
    for(int i=0 ;i<count;i++)
    {
        cout<<list[i]<<endl;
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
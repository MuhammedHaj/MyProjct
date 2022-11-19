#include<iostream>
using namespace std;
int swap1(int *x,int *y)
{
    int z;
    z=*x;
    *x=*y;
    *y=z;
    return 0;
}

int main()
{
    int x,y;
    cin>>x>>y;
    swap1(&x,&y);
    cout<<"x="<<x<<"\t y="<<y;
}
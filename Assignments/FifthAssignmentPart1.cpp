#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int x,list[50]={0,1};
	cin>>x;
	if(x>2)
	{
	for(int i=2;i<x;i++)
	{
		list[i]=list[i-1]+list[i-2];
	}}
	for(int i=0;i<x;i++)
	{
		cout<<list[i]<<endl;
	}
	}
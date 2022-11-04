#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int x,list[50]={0,1},i=2;
	cin>>x;
	if (x==0)
	{
		cout<<list[0];
	}
	else if(x==1)
	{
		cout<<list[0]<<"\n"<<list[1];
	}
	else
	{
		y:
		list[i]=list[i-1]+list[i-2];
		if (x==list[i])
		{
			for(int j=0;j<=i;j++)
			cout<<list[j]<<endl;
			
		}
		else
		{ i++;
		goto y;}
	}
	
	}
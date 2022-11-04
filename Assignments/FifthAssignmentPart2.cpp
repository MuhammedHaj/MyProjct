#include <iostream>
#include <cstring>
#include<stdarg.h>
using namespace std;
int list1[50];
int Numbers(int count,...)
{
	char x;
	int temp;
	va_list list;
	va_start(list,count);
	for(int i=0;i<count;i++)
	{
		list1[i]=va_arg(list,int);
	}
	va_end(list);
	cout<<"Do you want to arrange the numbers in ascending(Enter a) or descending(Enter d) order?\n";
			cin>>x;
			if(x=='d'){
	for(int i=0;i<count;i++)
	{		
		for(int j=i+1;j<count;j++)
		{
			if(list1[i]>list1[j])
			{
				temp  =list1[i];
				list1[i]=list1[j];
				list1[j]=temp;
			}
		}
	}}
	else if(x=='a')
	{
			for(int i=0;i<count;i++)
	{		
		for(int j=i+1;j<count;j++)
		{
			if(list1[i]<list1[j])
			{
				temp  =list1[i];
				list1[i]=list1[j];
				list1[j]=temp;
			}
		}
	}
	}
	else
	{
	cout<<"Wrong Entry";
	goto W;
	}
	for(int i=0;i<count;i++)
		cout<<list1[i]<<"\t";
	cout<<endl;	
	W:
	return 0;
	}
int main()
{
	Numbers(5,9,2,8,1,3);
}
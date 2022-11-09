	#include<iostream>
    using namespace std;
    void arrange_numbers(int list[],int count)
    {
        char x;
        int temp;
    cout<<"Do you want to arrange the numbers in ascending(Enter a) or descending(Enter d) order?\n";
			cin>>x;
			if(x=='a')
			{
	            for(int i=0;i<count;i++)
	            {		
		              for(int j=i+1;j<count;j++)
		             {
			           if(list[i]>list[j])
			             {
			             	temp  =list[i];
			            	list[i]=list[j];
				             list[j]=temp;
			             }
		             }
	            }       
	        }
	else if(x=='d')
	{
			for(int i=0;i<count;i++)
	{		
		for(int j=i+1;j<count;j++)
		{
			if(list[i]<list[j])
			{
				temp  =list[i];
				list[i]=list[j];
				list[j]=temp;
			}
		}
	}
	}
	else
	{
	cout<<"Wrong Entry";
    }
    for(int i=0 ;i<count;i++)
    {
        cout<<list[i]<<endl;
    }
    }
    int main()
    {
        int count;
        int arr[count];
     cout<<"Enter the number of digits of the array\n";
     cin>>count;
     cout<<"Enter the digits\n";
     for(int i=0 ;i<count;i++)
     {
        cin>>arr[i];
     }
     arrange_numbers(arr,count);
    }
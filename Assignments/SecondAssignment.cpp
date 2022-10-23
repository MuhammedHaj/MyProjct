#include <iostream>

using namespace std;

int main()
{
    int operation;
    double num1,num2;
    string question;
    begining:
    cout<<"Enter the number of operation:\n"<<"1-(+) \t 2-(-) \t 3-(*) \t 4-(/) \n5-(AND)  6-(OR)  7-(XOR) 8-(NOT)\n";
    cin>>operation;
    if(operation==8)
    {
        cout<<"Enter a number\n";
        cin>>num1;
        cout<<"result= "<<!(int(num1));
    }
    else if(operation==1 ||operation==2 ||operation==3 ||operation==4 ||operation==5 ||operation==6 || operation==7)
        {
            cout<<"Enter two numbers:\n";
            cin>>num1>>num2;
            if(operation==1)
            {
                cout<<"result= "<<num1+num2;
            }
            else if(operation==2)
            {
                    cout<<"result= "<<num1-num2;

            }
            else if(operation==3)
            {
                    cout<<"result= "<<num1*num2;

            }
            else if(operation==4)
            {
                if(num2==0)
                    cout<<"It can't be divided by zero :)";
                else
                    cout<<"result= "<<num1/num2;

            }
            else if(operation==5)
            {cout<<"result= "<<(int(num1)&int(num2));
            }
            else if(operation==6)
            {
            cout<<"result= "<<(int(num1)|int(num2));

            }
            else
            {
            cout<<"result= "<<(int(num1)^int(num2));

            }

        }
    else
    {
        cout<<"Wrong entry :(";
    }
    cout<<"\nDo you want to do another operation(yes/no)?\n";
    cin>>question;
    if(question=="yes")
        goto begining;
    return 0;
}

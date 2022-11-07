#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b,sum;
    char a1;
    cin>>a>>b;
  int len = a.size();
  int len1 = b.size();
  cout<<len<<" "<<len1<<endl;
  sum=a+b;
  cout<<sum<<endl;
  a1=a[0];
  a[0]=b[0];
  b[0]=a1;
  cout<<a<<" "<<b;
  
    return 0;
}
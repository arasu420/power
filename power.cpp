#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
int a,p,b;
cout<<"Enter the base num : ";
cin>>b;
cout<<"Enter the power num : ";
cin>>p;
a=pow(b,p);
cout<<"the value is: "<<a;
return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout<<"Enter a values for a and b :";
    cin>>a>>b;
    cout<<"Before the swap a = "<<a<<"\tb = "<<b<<"\n";
    /*a = a + b;
    b = a - b;
    a = a - b;*/
    c = a;
    a = b;
    b = c;
    cout<<"After the swap a = "<<a<<"\tb = "<<b<<"\n";
    return 0;
}
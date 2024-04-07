#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a, b;
    char choice;
    cout<<"";
    cin>>a;
    cin>>b;
    cout<<"'+','-','*','/'";
    cin>>choice;
    switch(choice)
    {
        case '+':
        {
            cout<<a+b<<"\n";
            break;
        }
        case '-':
        {
            cout<<a-b<<"\n";
            break;
        }
        case '*':
        {
            cout<<a*b<<"\n";
            break;
        }
        case '/':
        {
            cout<<a/b<<"\n";
            break;
        }
        default:
        {
            exit;
        }
    }
}
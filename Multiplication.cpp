#include<iostream>
using namespace std;
int main()
{
    int n, i;
    cout<<"Which Multiple Table You Want:";
    cin>>n;
    for(i=1;i<=10;i++)
    {
        cout<<i<<" * "<<n<< " = " << i*n <<"\n";
    }
}
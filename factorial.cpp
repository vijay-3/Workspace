#include<iostream>
using namespace std;
int main()
{
    int n, i, j=1;
    cout<<"Enter the factorial:";
    cin>>n;
    for(i=2;i<=n;i++)
    {
        j = j * i;
    }
    printf("Factorial of %d is %d",n,j);
}
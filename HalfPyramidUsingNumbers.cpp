/*
Code for half pyramid Using numbers
ex-5
1
22
333
4444
55555
*/
#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    for (int i=1;i<=num;i++)
    {
        for (int j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
};
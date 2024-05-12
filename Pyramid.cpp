#include<iostream>
//Code for pyramid
/*
ex-5
*
**
***
****
*****
*/
using namespace std;
int main()
{
    system("cls");
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
};
//Code for Square Rombus Star
/*
ex-5
    *
   ***
  *****
 *******
  *****
   ***
    *
*/
#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int n=0;
    cout<<"Enter the number: ";
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for (int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for (int j=2;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;    
    }
    
    for (int i=n-1;i>=1;i--)           //here you copy the above loop and change the intilization and condition 
    {
        for (int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for (int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for (int j=2;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    return 0;
};
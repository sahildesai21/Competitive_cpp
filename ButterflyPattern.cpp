#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int num=0;
    cout<<"Enter the number: ";
    cin>>num;
    for (int i=1;i<=num;i++)
    {
        for (int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        int space=2*num - 2*i; 
        for (int j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for (int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;  
    }
    for (int i=num;i>=1;i--)    //here you copy the above loop and change the intilization and condition 
    {
        for (int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        int space=2*num - 2*i; 
        for (int j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for (int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;  
    }

    
    return 0;
};
//Code for Full Number Pyramid
/*
ex-5
     1
   1 2 3
  1 2 3 4
 1 2 3 4 5     
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
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    return 0;
};
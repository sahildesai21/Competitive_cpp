//Code for zig-zag Pattern 
/*
ex-9
  *   *  
 * * * * 
*   *   *
*/
#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int num=0;
    cout<<"Enter the number: ";
    cin>>num;
    for (int i=1;i<=3;i++)
    {
        for (int j=1;j<=num;j++)
        {
            if (((i+j)%4==0)||((i==2&&j%4==0)))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
};
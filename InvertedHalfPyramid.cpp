//inverted half pyramid
/*
ex-5
*****
****
***
**
*
*/
#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int num;
    cout<<"enter the number: ";
    cin>>num;
    for (int i=1;i<=num;i++)
    {
        for (int j=0;j<=num-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
};
/*
code for flodys triangle 
ex-5 
1
2  3
4  5  6
7  8  9  10
11 12 13 14 15
*/
#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int num=0,c=1;
    cout<<"Enter the number: ";
    cin>>num;
    for (int i=1;i<=num;i++)
    {
        for (int j=1;j<=i;j++)
        {
            cout<<" "<<c;
            c++;
        }
        cout<<endl;
    }
    
    return 0;
};
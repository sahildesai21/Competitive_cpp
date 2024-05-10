// printing patterns
#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int rows=0,cols=0;
    cout<<"Enter rows and coloumns: "<<endl;
    cin>>rows>>cols;
    for (int i=1;i<=rows;i++)
    {
        for (int j=1;j<=cols;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
        
    return 0;
};
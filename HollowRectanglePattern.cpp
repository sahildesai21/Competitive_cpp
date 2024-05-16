//Code for Hallow Rectangle pattern
/* Ex-
******
*    *
*    *
*    *
******
*/
#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int rows=0,cols=0;
    cout<<"enter the Rows and Coloumns: "<<endl;
    cin>>rows>>cols;
    for (int i=1;i<=rows;i++)
    {
        for (int j=1;j<=cols;j++)
        {
            if(i==1 || i==rows || j==1 || j==cols){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
    return 0;
};

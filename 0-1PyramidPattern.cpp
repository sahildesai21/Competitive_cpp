//code for half 0-1 pyramid pattern
/*
ex-5
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/
#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    for (int i=0;i<=num;i++)
    {
        for (int j=1;j<=i;j++)      //if we add the co-ordinates of 1 then we will get the even number.
        {
            if ((i+j)%2==0)
            {
                cout<<"1"<<" ";
            }
            else{
                cout<<"0"<<" ";
            }
            
        }
        cout<<endl;
    }
    
    return 0;
};
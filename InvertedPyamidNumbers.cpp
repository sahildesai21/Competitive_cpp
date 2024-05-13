//code for half inverted pyramid numbers
/*
ex-5
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/
#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int num,count=0;
    cout<<"Enter the number: ";
    cin>>num;
    for (int i=0;i<=num;i++)
    {
        for (int j=1;j<num+1-i;j++)
        {
            cout<<j<<" ";
            
        }
        cout<<endl;
    }
    
    return 0;
};
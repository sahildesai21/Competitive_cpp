//Code to find Factorial for given n numbers
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    system("cls");
    int num=0,fact=1;
    cout<<"enter the number: "<<endl;
    cin>>num;
    for (int i=1;i<=num;i++)
    {
        fact=i*fact;
    }
    cout<<"Factorial: "<<fact<<endl;
    return 0;
};
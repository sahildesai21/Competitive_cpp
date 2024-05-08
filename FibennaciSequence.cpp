//Fibennaci Sequence without function
#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int num;
    int t0=0,t1=1,nextTerm;
    cout<<"enter the number: ";
    cin>>num;
    cout<<"Fibennaci Sequence: "<<endl;
    for (int i=0;i<=num;i++)
    {
        cout<<t0<<endl;
        nextTerm=t0+t1;
        t0=t1;
        t1=nextTerm;
    }
    return 0;
};
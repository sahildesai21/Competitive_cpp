//Fibennaci Sequence using function
#include<iostream>
using namespace std;
void Fibennaci(int f){
    int t1=0,t2=1,NextTerm;
    for (int i=0;i<=f;i++)
    {
        cout<<t1<<endl;
        NextTerm=t1+t2;
        t1=t2;
        t2=NextTerm;
    }
    return; 
}
int main()
{
    system("cls");
    int num=0;
    cout<<"enter the number: "<<endl;
    cin>>num;
    cout<<"Fibennaci Sequence: "<<endl;
    Fibennaci(num);
    return 0;
};
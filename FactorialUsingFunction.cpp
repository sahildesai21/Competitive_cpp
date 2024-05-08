//Factorial of enetered number using functions
#include<math.h>
#include<iostream>
using namespace std;
int Fact(long f){
    int fact=1;
    for (int i=1;i<=f;i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial: "<<fact<<endl;
    return fact;
}
int main()
{
    system("cls");
    long num=0;
    cout<<"enter the Number: ";
    cin>>num;
    Fact(num);
    return 0;
};
//code to find the prime no.s between the given range of numbers
/*  suppose i=num=4
    check i(2...)<=sqrt(2)-(true)
    check num(4)%i(2,..)==0 -(true) then it is not a prime number    */
#include<iostream>
#include<math.h>
using namespace std;
bool prime(int num){
    for(int i=2;i<=sqrt(num);i++){
        if (num%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    system("cls");
    int a,b;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    for (int i=a;i<=b;i++)
    {
        if (prime(i))
        {
            cout<<i<<endl;
        }
    }
    
return 0;
};

#include<iostream>
#include<math.h>
using namespace std;
int fact(int f){
    int fact=1;
    for (int i=1;i<=f;i++)
    {
        fact*=i;
    }
    return fact;
}
int main()
{
    system("cls");
    int n=0,r=0;
    int ans=0;
    cout<<"Enter the value of n and r: ";
    cin>>n>>r;
    cout<<"";
    ans=(fact(n))/(fact(r)*fact(n-r));
    cout<<"nCr: "<<ans<<endl;
    return 0;
};
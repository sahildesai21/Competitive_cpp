//Code for Palindromic Pattern
/*
ex-5
        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5
*/
#include<iostream>
using namespace std;
int main()
{
  system("cls");
    int n=0;
    cout<<"Enter the number: ";
    cin>>n;
    for (int i=1;i<=n;i++)
    {
      for (int j=1;j<=n-i;j++)
      {
        cout<<"  ";
      }
      int l=i;
      for (int k=1;k<=i;k++){
        cout<<" "<<l;
        l--;
      }
      for (int k=n;k>=n-i;k--){
        if (l>=2)
        {
          cout<<" "<<l;
        }
        l++;
      }
      cout<<endl;
    }
    return 0;
};
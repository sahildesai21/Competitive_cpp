//Code for HalfPyramidAfter180
/*
ex-5
     *
    **
   ***
  ****
 *****
*/
#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int num=0;
    cout<<"Enter the number: ";
    cin>>num;
    for (int i=1;i<=num;i++)
    {
        for (int j=1;j<=num;j++)
        {
            if (j<=num-i)
            {
                cout<<" ";
            }
            else{
                cout<<"*";
            }
            
                
        }
        cout<<endl;
    }
    
    return 0;
}
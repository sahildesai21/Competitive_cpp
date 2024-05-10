/* pascal triangle
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
*/
#include<iostream>
#include<math.h>
using namespace std;
int fact(int f){
    int fact=1;
    for (int i=1;i<=f;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    system("cls");
    int num=0,pascal=0;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    cout<<"Pascal Triangle: "<<endl;
    for (int i=0;i<=num;i++)    //i is for number for rows
    {
        for (int j=0;j<=i; j++)   //j is for number for coloumns
        {
            pascal=fact(i)/(fact(j)*fact(i-j));
            cout<<pascal<<" ";
        }
        cout<<" "<<endl;
    }
    return 0;
};
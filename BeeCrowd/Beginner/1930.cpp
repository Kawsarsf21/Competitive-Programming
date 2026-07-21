#include<iostream>
using namespace std;
int add()
{
    int sum=0,T[4];
    for(int i=0;i<4;i++)
    {
        cin>>T[i];
        sum+=T[i];
    }
    return sum-3;
}
int main()
{
 cout<<add()<<endl;
 return 0;
}

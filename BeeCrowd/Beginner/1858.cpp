#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int T[N],mini=100,counta=0;
    for(int i=1;i<=N;i++)
    {
        cin>>T[i];
        if(T[i]<mini){mini=T[i];counta=i;}
    }
    cout<<counta<<endl;
    return 0;
}

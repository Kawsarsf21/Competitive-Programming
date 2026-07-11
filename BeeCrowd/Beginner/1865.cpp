#include<iostream>
#include<string>
using namespace std;
int main()
{
    int N,F;
    string S;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>S>>F;
        if("Thor"==S)cout<<"Y"<<endl;
        else cout<<"N"<<endl;
    }
    return 0;
}

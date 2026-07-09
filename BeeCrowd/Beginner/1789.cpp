#include <iostream>
using namespace std;

int main(){
    int L;
    while(cin>>L)
    {
        int V[L],max=0;
        cin>>V[0];
        max=V[0];
        for(int i=1;i<L;i++)
        {
            cin>>V[i];
            if(max<V[i])max=V[i];
        }
        if(max<10)cout<<"1"<<endl;
        else if(max>=20)cout<<"3"<<endl;
        else cout<<"2"<<endl;
    }
}
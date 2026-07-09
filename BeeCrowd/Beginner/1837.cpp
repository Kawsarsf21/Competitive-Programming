#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int a,b,q,r;
    cin>>a>>b;
    r=a/b;
    q=a%b;
    if(r<0){
    if(b>0){
        r+=b;
        q-=1;
    }
    else{
        r+=abs(b);
        q+=1;
    }
    }   
    cout<<q<<" "<<r<<endl;
    return 0;
}
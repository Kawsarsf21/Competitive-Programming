#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int A,B,C,D,a[4],ans=0;
    cin>>A>>B>>C>>D;
    a[0]=A;a[1]=B;a[2]=C;a[3]=D;
    sort(a,a+4);
    for(int i=0;i<2;i++)
    { 
        for(int j=i+1;j<3;j++)
        {
           for(int k=j+1;k<4;k++)
            {
                if(a[i]+a[j]>a[k])ans=1;
            }
        }
    }
    if(ans==1)cout<<"S"<<endl;
    else cout<<"N"<<endl;
    return 0;
}
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int num,time;
    double per,t;
    cin>>num>>time>>per;
    t=time*per;
    cout<<"NUMBER = "<<num<<endl;
    cout<<fixed<<setprecision(2)<<"SALARY = U$ "<<t<<endl;
    return 0;
}

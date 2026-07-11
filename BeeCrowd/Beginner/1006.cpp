#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double A,B,C,MEDIA;
    cin>>A>>B>>C;
    MEDIA=(A*2+3*B+5*C)/(2+3+5);
    cout<<"MEDIA = "<<fixed<<setprecision(1)<<MEDIA<<endl;
    return 0;
}

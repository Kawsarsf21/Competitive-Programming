#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int code1,num1,code2,num2;
    double price1,price2,total=0;
    cin>>code1>>num1>>price1>>code2>>num2>>price2;
    total=(num1*price1)+(num2*price2);
    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<total<<endl;
    return 0;
}

#include<iostream>
#include<iomanip>
using namespace std;
const double PI=3.14159;
int main()
{
    double A,B,C,area;
    cin>>A>>B>>C;
    area=0.5*A*C;
    cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<area<<endl;
    area=PI*C*C;
    cout<<"CIRCULO: "<<fixed<<setprecision(3)<<area<<endl;
    area=0.5*(A+B)*C;
    cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<area<<endl;
    area=B*B;
    cout<<"QUADRADO: "<<fixed<<setprecision(3)<<area<<endl;
    area=A*B;
    cout<<"RETANGULO: "<<fixed<<setprecision(3)<<area<<endl;

    return 0;
}

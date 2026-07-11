#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,b,c,MaiorAB,FinalMaior;
    cin>>a>>b>>c;
    MaiorAB=(a+b+abs(a-b))/2;
    FinalMaior=(MaiorAB+c+abs(MaiorAB-c))/2;
    cout<<FinalMaior<<" eh o maior"<<endl;
    return 0;
}

#include<iostream>
using namespace std;
int big()
{
    int A,B;
    cin>>A>>B;
    if(A>B)return A;
    else if(B>A)return B;
    else return A;
}
int main()
{
    cout<<big()<<endl;
    return 0;

}

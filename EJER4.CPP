#include <iostream>
using namespace std;

void cambio(int &a , int &b)
{
    int c;
    c=a;
    a=b;
    b=c;
}
void cambio2(int &a , int &b)
{
    a=a^b;
    b=a^b;
    a=a^b;

}
int main()
{
    int a,b;
    cout<<"ingresar numero a:";
    cin>>a;

    cout<<"ingresar numero b:";
    cin>>b;

    cambio2(a,b);

    cout<<"el nuevo valor de a es :"<<a<<endl;
    cout<<"el nuevo valor de b es :"<<b<<endl;

    return 0;
}

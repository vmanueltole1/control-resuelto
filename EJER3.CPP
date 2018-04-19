#include <iostream>
using namespace std;

int pote(int a, int b){

    if (b==1)
    {
        return a;
    }
    else
    {
        return a * pote(a,--b);
    }
}

int main()
{
    int a,b;
    cout<<"ingresar numero :";
    cin>>a;

    cout<<"ingresar exponente  :";
    cin>>b;

   cout<<pote(a,b);

    return 0;
}

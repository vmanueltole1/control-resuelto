#include <iostream>
using namespace std;

bool Primo(int n)
{
	int cont=0;
	for(int i=1;i<(n+1);i++)
        {
		if((n%i)==0)
			cont++;
        }
	if(cont!= 2)
    {
        return false;
    }
	else
    {
        return true;
    }

}
int main()
{

	int p;
	int cont=0;
	int j=1;
	cout<<"Cantidad de primos a imprimir : ";
	cin>>p;

	for(cont=1;cont!=p;++j)
        {
		if(Primo(j)==true)
            {
			cout<<j<<endl;
			j+=1;
			cont+=1;
            }

        }

}

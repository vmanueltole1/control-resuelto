#include <iostream>
using namespace std;

bool esperfecto(int);

int main()
{

	for(int x=5;x<=10000;x++)
        {
		if(esperfecto(x)==true)
		{
			cout<<" n "<<x<<": ";

			for(int y=1;y<x;y++)
			{
				if((x%y)==0)
				{
					cout<<y<<" ";
				}
			}
		cout<<'\n';
		}
	}
	cout<<'\n';

}
bool esperfecto(int n){
	int s=0;

	for(int i=1;i<n;i++)
        {
		if((n%i)==0)
		{
			s+=i;
		}
        }

	if(s==n)
    {
        return true;
    }
	else
    {
        return false;
    }

}

#include <iostream>

using namespace std;

int main()
{
	
	int x,d,p,u;

	cin>>x;
    
    p=x/2;
    
	u=x-2*p;
	
	if(u>=1)
	{
		cout<<"o "<<x<<" einai perittos"<<endl;
	}
	else
	{
		cout<<"o "<<x<<" einai artios"<<endl;
	}

	return 0;
	
}

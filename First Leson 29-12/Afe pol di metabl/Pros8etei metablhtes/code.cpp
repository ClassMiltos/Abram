#include <iostream>

using namespace std;

int main()
{
	
	int y,x,d,p,u;

	cin>>x;
	cin>>y;
	
	
    
    p=x/2;
    
	u=x-2*p;
	
	if(u>=1)
	{
		for(x=x+1;x<=y;x=x+2)
		{
			cout<<x<<endl;
		}
	}
	else
	{
		for(x;x<=y;x=x+2)
		{
			cout<<x<<endl;
		}
	}

	return 0;
	
}

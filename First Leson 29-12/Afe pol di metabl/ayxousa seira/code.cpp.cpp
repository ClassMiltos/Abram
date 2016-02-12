#include <iostream>

using namespace std;

int main()
{
	
	int x,y,z;
	
	cin>>x;
	cin>>y;
	cin>>z;
	
	if (x<y && x<z && y<z)
	{
      cout<<x<y;
      cout<<y<z;
	}
	else if(z<x &&  x<y)
	{
	  cout<<z<x<y<<endl;
	}
	else
	{
	  cout<<y<z<x<<endl;
	}
	
	return 0 ;
	
}

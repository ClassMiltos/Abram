#include <iostream>

using namespace std;

int main()
{
	
	int x,y,z;
	
	cin>>x;
	cin>>y;
	cin>>z;
	
	if (x<y && y<z && x<z)
	{
		cout<<x;
		cout<<"<"<<y;
		cout<<"<"<<z;
	}
	else if (x<y && z<y && x<y)
	{
		cout<<x;
		cout<<"<"<<z;
		cout<<"<"<<y;
	}
	else if (z<x && x<y && z<y)
	{
		cout<<z;
		cout<<"<"<<x;
		cout<<"<"<<y;
	}
	else if (z<y && y<x && z<x)
	{
		cout<<z;
		cout<<"<"<<y;
		cout<<"<"<<x;
	}
	else if (y<z && z<x && y<x)
	{
		cout<<y;
		cout<<"<"<<z;
		cout<<"<"<<x;
	}
	else
	{
		cout<<y;
		cout<<"<"<<x;
		cout<<"<"<<z;
	}
	
	
	
	return 0;
	
}

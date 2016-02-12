#include<iostream>
#include<math.h>

using namespace std;

int main ()
{
	
	int x,a,b,c,d,x1,x2;
	
	cin>>a;
	cin>>b;
	cin>>c;
	
	d=a*x*x+b*x+c;
	
	x1=-b-sqrt d/2*a;
	x2=-b+sqrt d/2*a;
	
	cout<<d<<endl;
	cout<<x1<endl;
	cout<<x2<<endll;
	
	return 0;
}

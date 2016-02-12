#include<iostream>
#include<math.h>

using namespace std;

int main ()
{
   float a,b,c,d,e,f,g;

   cin>>a;
   cin>>b;
   cin>>c;

   d=b*b-4*a*c;

   cout<<d<<endl;

   if (d<0)
   {
   	cout<<"adynato"<<endl;
   }
   
   if (d=0)
   {
    g=-(b)/2*a;

    cout<<g;
   }
   
   if (d>0)
   {
   e=-b+sqrt(d)/2*a;
   
   f=-b-sqrt(d)/2*a;
   
   cout<<e<<endl;
   cout<<f<<endl;
   }
   
   return 0;
}

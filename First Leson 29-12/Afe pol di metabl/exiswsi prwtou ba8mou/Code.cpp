#include<iostream>

using namespace std;

int main()
{
   float x,a,b;

   cin>>a;
   cin>>b;


   if (a==0 && b==0)
   {
       cout<<"aoristo";
   }
   else if (a<0 || a>0)
   {
       x=-b/a;
       cout<<x<<endl;
   }
   else
   {
       cout<<"adynato";
   }
   return 0;

}

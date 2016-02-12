#include<iostream>

using namespace std;

int main()
{
   int x,y,z,v;

   x=-45;
   y=73;
   z=0;

   v=x+y+z;
   x=v-y-x;
   y=v-z-y;
   z=v-y-x;

   cout<<x<<endl;
   cout<<y<<endl;
   cout<<z<<endl;

   return 0;

}

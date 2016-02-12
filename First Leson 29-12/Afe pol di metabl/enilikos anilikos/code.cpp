#include<iostream>

using namespace std;

int main ()
{
   int x;

   cin>>x;

   if (x>=18)
   {
       cout<<"einai enhlikas"<<endl;
   }

   if (x<18 && x>=1)
   {
       cout<<"einai anhlikas"<<endl;
   }
   if (x<=0)
   {
       cout<<" den yparxeis"<<endl;
   }
   return 0;
}


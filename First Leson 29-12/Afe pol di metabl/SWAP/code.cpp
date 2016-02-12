#include<iostream>

using namespace std;

int main ()
{
  int x,y,v;

  x=4;
  y=3;

  v=x+y;
  x=v-x;
  y=v-y;

  cout<<x<<endl;
  cout<<y<<endl;

  return 0;

}

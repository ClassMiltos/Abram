#include <iostream>

using namespace std;

int main()
{

	int table[5],i,u,x,m;

    for(i=0;i<5;i=i+1)
    {
        cin>>table[i];
    }

    m=0;

    for(i=0;i<5;i=i+1)
    {
        u=table[i]%2;

        if(u==1)
        {
         m=m+1;
        }

    }

    cout<<m<<endl;

	return 0;

}

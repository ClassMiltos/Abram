#include <iostream>

using namespace std;

int main()
{

	int table[5],i,u,x;

    for(i=0;i<5;i=i+1)
    {
        cin>>table[i];
    }
    for(i=0;i<5;i=i+1)
    {
        u=table[i]%2;

        if(u==1)
        {
            cout<<table[i]<<endl;
        }





    }



	return 0;

}

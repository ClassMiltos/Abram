#include <iostream>

using namespace std;

int main()
{

	int i,x;

    cin>>x;

    int table[x];

    for(i=0;i<x;i=i+1)
    {
        cin>>table[i];
    }

    cout<<endl;

    for(i=0;i<x;i=i+1)
    {
        cout<<table[i]<<endl;
    }


	return 0;

}

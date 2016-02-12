#include <iostream>

using namespace std;

int main()
{

	int x,i,m;

    cin>>x;

    m=1;

    for(i=1;i<=x;i=i+1)
    {
        m=m*i;
    }

    cout<<m;

	return 0;

}

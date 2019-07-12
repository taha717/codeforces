#include <iostream>

using namespace std;

int main()
{
    int x,co=0;
    cin>>x;

    while(x/2!=0)
    {
        if(x%2==1)
            co++;

        x=x/2;
    }

    cout<<co+1;

    return 0;
}
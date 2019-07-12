#include<bits/stdc++.h>
using namespace std;

int main()
{

    int i,j,k;
    int n,m;

    cin>>n;

    for(i=n/2;i>0;i--)
    {
        k=n-i;

        if(__gcd(k,i)==1)
        {
            cout<<i<<" "<<k<<endl;
            break;
        }
    }

    return 0;
}
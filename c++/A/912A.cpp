#include<bits/stdc++.h>

using namespace std;

int main()
{

    int i,j,k;
    int n,m;
    long long A,B,t=0;
    long long x,y,z;

    cin>>A>>B;
    cin>>x>>y>>z;

    if(A<(2*x+y))
        t+=((2*x+y)-A);

    if(B<(y+3*z))
        t+=((3*z+y)-B);

    cout<<t;

    return 0;
}
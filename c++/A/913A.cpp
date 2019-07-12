#include<bits/stdc++.h>
using namespace std;

    int main(){
    int n,m;
    cin>>n>>m;
    int res=1;

    for(int i=0;i<n;i++){
     res *= 2;
     if(res> m){
    cout<<m<<endl;
     return 0;
     }

    }
    cout<<m%res<<endl;

    return 0;
    }
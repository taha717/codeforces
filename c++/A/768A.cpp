#include <iostream>

using namespace std;

int main(){
    int n ,ma,mi,p;
    cin >> n;
    int st[n];
    cin >> st[0];
    ma = st[0];
    mi = st[0];
    for (int i=1;i<n;i++){
        cin >>st[i];
        if (ma < st[i])
            ma = st[i];
        if (mi > st[i])
            mi = st[i];
    }
    p = n;
    for (int i=0;i<n;i++){
        if ((st[i] == ma)||(st[i]==mi))
            p--;
    }
    cout << p;
    return 0;
}

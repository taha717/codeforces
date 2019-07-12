#include <iostream>
#include <algorithm>
#include <functional>


using namespace std;

int main(){

    int n ,itr;
    cin >> n;
    int s[n]={0} , b[n];
    for (int i=0;i<n;i++){
        cin >> s[i];
    }
    copy(s,s+n,b);
    sort(b,b+n,std::greater<int>());
    for (int i=0;i<n;i++){
        for (int k=0 ; k<n;k++){
            if (s[k]==b[i])
                int itr = k-i;
        }
        if (itr>0){
            for (int j=0;j<itr;j++){
                cout << endl;
            }
        }

        cout << b[i];

    }


}

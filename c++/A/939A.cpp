#include <iostream>

using namespace std;

int main (){
    int n , arr[5003];
    bool flag = 0;
    cin >> n;
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    for (int i = 0 ; i < n ; i++){
        if (i==arr[arr[arr[i]-1]-1]-1)
            flag = 1;
    }
    if(flag)
        cout <<"YES" ;
    else
        cout <<"NO" ;

    return 0;

}

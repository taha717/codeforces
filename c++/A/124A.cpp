#include <iostream>

using namespace std;

int main(){
    int a , b , n ;
    cin >> n >> a >> b ;
    if ((n-a)<(b+1))
        cout << n-a ;
    else
        cout << b+1 ;
    return 0 ;
}

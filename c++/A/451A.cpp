#include <bits/stdc++.h>

using namespace std;

int main (){
    int m , n , c ;
    cin >> n >> m ;
    while (m > 0 & n > 0){
        n--;
        m--;
        c++;
    }
    if (c%2==0)
        cout << "Malvika";
    else
        cout << "Akshat";
    return 0 ;
}
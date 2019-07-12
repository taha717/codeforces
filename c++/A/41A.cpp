#include <iostream>

using namespace std;

int main()
{
    string s , t ;
    int n , c=0;
    cin >> s >> t;
    n = s.length();
    for (int i = 0 ;i < n ; i++ ){
        if (s[i]==t[n-i-1]){
            c++;
        }
    }
    if (c==n){
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}
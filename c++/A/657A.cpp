#include <iostream>

using namespace std;


int main(){

    long long a , b , c ;
    cin >> a >>b >> c;
    if (c!=0){

        if((b-a)%c==0 && (b-a)/c>=0)
                cout<<"YES";
            else
                cout<<"NO";
    }
    else{
        if (a==b)
            cout << "YES";
        else
            cout << "NO";
    }
    return 0 ;
}

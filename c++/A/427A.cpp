#include <iostream>

using namespace std;

int main()
{
    int n , e , c=0 , p=0;
    cin >> n ;
    int d [100001];
    for (int i = 0 ; i < n ; i++){
        cin >> d[i];
    }
    for (int i = 0 ; i < n ; i++){
        if (d[i]>0)
            p+=d[i];
        else if (p > 0)
            p--;
        else
            c++;
    }
    cout << c;



    return 0;
}
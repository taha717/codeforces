#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int arr[1001],n,s,i,k;
    cin >> n ;
    for ( i = 0 ; i<n ; i++){
        cin >> arr[i];
    }
    for ( i = 0 ; i<n ; i++){
        for ( k = 0 ; k<n ; k++){
            if (arr[i]<arr[k])
                swap(arr[i],arr[k]);
        }
    }
    for ( i = (n-1) ; i>=0 ; i--){
        s = sqrt(arr[i]);
        if (arr[i]!=(s*s)){
            break;
        }

    }
    cout << arr[i];


    return 0;
}
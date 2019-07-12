#include <iostream>

using namespace std;



int main(void)
{
    int n , arr[11][11]={0};
    cin >> n;
    for(int i=1; i<=n; i++)
        arr[1][i]= 1;

    for(int i= 2; i<= n; i++){
        for(int j= 1; j<= n; j++){
            arr [i][j]= arr[i-1][j]+arr[i][j-1];
        }
    }

    cout << arr[n][n] <<endl;

    return 0;
}
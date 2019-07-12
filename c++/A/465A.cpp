#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    scanf("%d\n", &n);
    string cell;
    getline(cin, cell);

    int o = 0;

    for(int i = 0; i < n; i++){
        if(cell[i] == '1')
            ++o;
        else
            break;
    }

    if(o < n){++o;}

    printf("%d\n", o);

    return 0;
}
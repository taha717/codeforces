#include <iostream>

using namespace std ;

int main(){
    string line ;
    cin >> line ;
    int n = line.length()+2;
    int alpha[26]={0};
    while (n--){
        char c = line[n];
        if((c !='{')||(c !='}')||(c != ',')||(c!=' ')){
            alpha[c-97]++;
        }
    }
    n=0;
    for (int i=0;i<26;i++){
        n+=alpha[i];
    }
    cout << n;
}

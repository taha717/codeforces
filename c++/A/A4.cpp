#include <iostream>
using namespace std;

int main(){
    
    int w;
    cin>>w;
    if (w<1 || w>100 || w==2 || w%2!=0){
        cout << "NO";
    }
    else
        cout << "YES";
    
    
    
}
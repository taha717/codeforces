#include<iostream>

using namespace std;

int main(){
	long n , a , b ;
	int c;
	cin>>n>>a>>b;
	long x = 0;
	long long unserved = 0;
	while(n--){
		cin >> c;
		if(c == 2){
			if(b==0) unserved+=2;
			else b--;
		}
            else {
			if(a == 0 && x == 0 && b == 0)
                unserved++;

			else if(a==0 && b == 0){
				x--;
			}
			else if(a==0){
				b--;
				x++;
			}
			else {
				a--;
			}
		}
	}
	cout<<unserved<<endl;
	return 0;
}

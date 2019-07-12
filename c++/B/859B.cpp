#include <bits/stdc++.h>

using namespace std;

int p;

int main() {
	cin>>p;
	int x=1;
	while (x*x<p) {
		x++;
	}
	if (p-(x-1)*(x-1)<x) {
		cout<<2*x+2*(x-1)<<endl;
	}
	else {
		cout<<4*x<<endl;
	}
	return 0;
}
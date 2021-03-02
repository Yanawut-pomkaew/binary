#include <bits/stdc++.h>
using namespace std;

int main () {

	int s=0,m=0;
	string k = "";
	int a[] = {1,2,4,8,16,32,64,128,256,512,1024,2048,4096};
	int n,sum=0;
	cin >> n;
	
	for (int i = 12 ; i>=0 ; --i) {
		if (n>=a[i]) {
			n = n-a[i];
			k = k+"1";
			m++;
		}else {
			if (n<=a[i] && m==0) {
				continue;
			}
			k = k+"0";
		}
	}
	cout << k << endl;
	return 0;
}

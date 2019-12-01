/**
 * desc: P1317.低洼地 
 * author: yinsuhu
 * date: 2019.12.01
 */
#include<iostream>
using namespace std;
int main() {
	int n, x, y = 0, c = 0;
	bool z = 0;
	cin >> n;
	for(int i = 1; i < n; i++) {
		cin >> x;
		if(x < y) z = 1;
		if(x > y && z == 1) {
			c++;
			z = 0;
		}
		y = x;
	}
	cout << c << endl;
	return 0;
} 

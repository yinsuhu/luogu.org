/**
 * desc: P1534.不高兴的津津 
 * author: yinsuhu
 * date: 2019.12.01
 */
#include<iostream>
using namespace std;
int main() {
	int n, y = 0, x = 0, a, b, t;
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> a;
		cin >> b;
		t = a + b + y - 8;
		x += t;
		y = t;
	}
	cout << x << endl;
	return 0;
} 

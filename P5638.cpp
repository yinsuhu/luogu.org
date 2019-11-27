/**
 * desc: P5638.光骓者的荣耀
 * author: yinsuhu
 * date: 2019.11.27
 */
#include<iostream>
using namespace std;
int main() {
	long long n, k, max = 0, sum = 0;
	cin >> n >> k;
	long long a[n];
	long long b[n];
	b[0] = 0;
	for(int i = 1; i < n; i++) {
		cin >> a[i];
		sum += a[i];
		b[i] = b[i-1] + a[i];
		long long t = 0;
		if(i >= k) {
			/**
			for(int j = i - k + 1; j <= i; j++) {
				t += a[j];
			}
			*/
			t = b[i] - b[i-k];
			if(t > max) {
				max = t;
			}
		}
	}
	cout << sum - max << endl;
	return 0;
} 

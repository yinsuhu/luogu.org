/**
 * desc: P1002.过河卒 
 * author: yinsuhu
 * date: 2019.12.02
 */
#include<iostream>
#include<cstring>
using namespace std;
bool is_ma(int a,int b, int c, int d) {
	bool ma1 = (a == c - 2 && b == d - 1);
	bool ma2 = (a == c - 1 && b == d - 2);
	bool ma3 = (a == c + 1 && b == d - 2);
	bool ma4 = (a == c + 2 && b == d - 1);
	bool ma5 = (a == c + 2 && b == d + 1);
	bool ma6 = (a == c + 1 && b == d + 2);
	bool ma7 = (a == c - 1 && b == d + 2);
	bool ma8 = (a == c - 2 && b == d + 1);
	bool ma = (a == c && b == d);
	return ma1 || ma2 || ma3 || ma4 || ma5 || ma6 || ma7 || ma8 || ma;
}
/**
bool is_legal(int x, int y, int n, int m) {
	return x + 1 >= 1 && x + 1 <= n && y + 1 >= 0 && y + 1 <= m;
}
*/
int main() {
	int x, y, u, v;
	cin >> x >> y >> u >> v;
	unsigned long long a[x+2][y+2];
	/**
	if(!is_legal(x, y) || !is_legal(u, v)) {
		cout << 0 << endl;
		return 0;
	}
	*/
	memset(a, 0, sizeof(a));
	a[1][0] = 1;
	for(int i = 1; i <= x+1; i++) {
		for(int j = 1; j <= y+1; j++) {
			if(is_ma(i, j, u + 1, v + 1)) {
				a[i][j] = 0;
			} else {
				a[i][j] = a[i-1][j] + a[i][j-1];
			}
			//cout << a[i][j] << " ";
		}
		//cout << endl; 
	}
	cout << a[x+1][y+1] << endl;
	return 0;
} 

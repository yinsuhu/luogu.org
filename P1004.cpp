/**
 * desc: P1004.方格取数 
 * author: yinsuhu
 * date: 2019.12.05
 */
#include<iostream>
#include<cstring>
using namespace std;
int main() {
	int n, x, y, v;
	cin >> n;
	int a[n+1][n+1], ans[n+1][n+1][n+1][n+1];
	memset(a, 0, sizeof(a));
	memset(ans, 0, sizeof(ans));
	bool is_end = false;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			cin >> x >> y >> v;
			if(x == 0 && y == 0 && v == 0) {
				is_end = true;
				break;
			} else {
				a[x][y] = v;
			}
		}
		if(is_end) break;
	}
	
	/**
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
	return 0;
	*/
	
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			for(int k = 1; k <= n; k++) {
				for(int l = 1; l <= n; l++) {
					ans[i][j][k][l] = max(max(ans[i-1][j][k-1][l], ans[i-1][j][k][l-1]), max(ans[i][j-1][k-1][l], ans[i][j-1][k][l-1])) + a[i][j] + a[k][l];
					if(i == k && j == l) {
						ans[i][j][k][l] -= a[i][j];
					}
				}
			}
		}
	}
	cout << ans[n][n][n][n];
	return 0;
}

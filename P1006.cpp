/**
 * desc: P1006.传纸条 
 * author: yinsuhu
 * date: 2019.12.05
 */
#include<iostream>
#include<cstring>
using namespace std;
int main() {
	int m, n;
	cin >> m >> n;
	int a[m+1][n+1];
	int ans[m+1][n+1][m+1][n+1];
	memset(a, 0, sizeof(a));
	memset(ans, 0, sizeof(ans));
	for(int i = 1; i <= m; i++) {
		for(int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}
	for(int i = 1; i <= m; i++) {
		for(int j = 1; j <= n; j++) {
			for(int k = 1; k <= m; k++) {
				for(int l = 1; l <= n; l++) {
					ans[i][j][k][l] = max(max(ans[i][j-1][k][l-1], ans[i][j-1][k-1][l]), max(ans[i-1][j][k][l-1], ans[i-1][j][k-1][l])) + a[i][j] + a[k][l];
					if(i == k && j == l) {
						ans[i][j][k][l] -= a[i][j];
					}
				}
			}
		} 
	}
	cout << ans[m][n][m][n];
	return 0;
}

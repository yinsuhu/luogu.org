/**
 * desc: P5594.模拟赛
 * author: yinsuhu
 * date: 2019.11.26
 */
#include<iostream>
#include<cstring>
using namespace std;
int main() {
    int n, m, k, i, j, x, y;
    cin >> n >> m >> k;
    int a[n+1][m+1];
    int b[k+1];
    int c[k+1];
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    for(i = 1; i <= m; i++) {
        memset(c, 0, sizeof(c));
        for(j = 1; j <= n; j++) {
            if(c[a[j][i]] == 0) {
                b[a[j][i]]++;
                c[a[j][i]] = 1;
            }
        }
    }
    for(i = 1; i <= k; i++) {
        cout << b[i] << " ";
    }
    cout << endl;
    return 0;
}

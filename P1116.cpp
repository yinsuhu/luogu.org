/**
 * desc: P1116.车厢重组
 * author: yinsuhu
 * date: 2019.11.21
 */
#include<iostream>
using namespace std;
int main() {
    int n, i, j, a[10000], c = 0;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for(i = 1; i < n; i++) {
        for(j = n; j > i; j--) {
            if(a[j] < a[j-1]) {
                int tmp = a[j];
                a[j] = a[j-1];
                a[j-1] = tmp;
                c++;
            }
        }
    }
    cout << c << endl;
    return 0;
}

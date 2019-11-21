/**
 * desc: P5534.等差数列
 * author: yinsuhu
 * date: 2019.11.21
 */
#include<iostream>
using namespace std;
int main() {
    long long a1, a2, an, n, sum;
    cin >> a1 >> a2 >> n;
    an = a1 + (n - 1) * (a2 - a1);
    sum = (a1 + an) * n / 2;
    cout << sum << endl;
    return 0;
}

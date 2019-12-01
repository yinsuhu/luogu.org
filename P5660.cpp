/**
 * desc: P5660.数字游戏
 * author: yinsuhu
 * date: 2019.12.01
 */
#include<iostream>
using namespace std;
int main() {
	char c[10];
	int j = 0; 
	for(int i = 0; i < 8; i++) {
		cin >> c[i];
		if(c[i] == '1') j++;
	}
	cout << j << endl;
	return 0;
} 

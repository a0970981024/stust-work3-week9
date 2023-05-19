#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;


int main() {
	string sentence;
	//原本32~125位元	
	string Demo = "abcdefghijklmnopqrstuvwxyz1234567890-=[]\\;',./ ";
	//右移一位後32~125位元
	string change = "snvfrghjokl;,mp[wtdyibecux234567890-==]\\\\''.// ";
	int r = 0;
	
	//只可輸入32~125位元(ASSIC)
	do {
		getline(cin, sentence);
		r = 0;
		for (int i = 0; i < size(sentence); i++) {
			if (sentence[i] < 32 || sentence[i]>125) {
				r++;
			}
			//打字串英文轉為小寫
			if (sentence[i] >= 65 && sentence[i] <= 90) {
				sentence[i] += 32;
			}
		}
	} while (r != 0);

	//用輸入字串與原本的32~125位元比較
	//找到相同為數時 列印右移後的32~125位元
	for (int i = 0; i < size(sentence); i++) {
		for (int j = 0; j < size(Demo); j++) {
			if (sentence[i] == Demo[j]) {
				cout << change[j];
			}
		}
	}

	

	

}

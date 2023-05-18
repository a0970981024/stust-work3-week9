#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;


int main() {
	string sentence;
	string Demo = "abcdefghijklmnopqrstuvwxyz1234567890-=[]\\;',./ ";
	string change = "snvfrghjokl;,mp[wtdyibecux234567890-==]\\\\''.// ";
	int r = 0;
	
	//限制為 ASCII 表中，編號 32 至 125 之字元 
	do {
		getline(cin, sentence);
		r = 0;
		for (int i = 0; i < size(sentence); i++) {
			if (sentence[i] < 32 || sentence[i]>125) {
				r++;
			}
		}
	} while (r != 0);

	for (int i = 0; i < size(sentence); i++) {
		for (int j = 0; j < size(Demo); j++) {
			if (sentence[i] == Demo[j]) {
				cout << change[j];
			}
		}
	}

	

	

}

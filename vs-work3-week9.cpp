#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;


int main() {
	string sentence,sword;
	char word[1000]={0};
	int temp = 0, space = 0, spspace = 0;
	getline(cin, sentence);
	for (int i = 0; i < size(sentence); i++) {
		if (sentence[i] < 91 && sentence[i] >64) sentence[i] += 32;
		if (sentence[i] == ' ') {
			space++;
		}
	}
	for (int i = 0; i < size(sentence); i++) {
		int x = 0, y = 0;

		if (sentence[i] == ' ') {
			spspace++;

			for (int t = temp; t < i; t++) {
				word[x] = sentence[t];
				//cout << word[x];
				x++;
			}
			sword = word;

			if (temp != 0) {
				for (int q = 0; q < temp - (size(sword) - 1); q++) {
					y = 0;
					for (int w = 0; w < size(sword); w++) {
						if (sentence[w + q] == sword[w]) y++;
					}
					if (y == size(sword)) {
						for (int j = temp; j < i; j++) {
							temp++;
						}
						break;
					}
				}
				if (y != size(sword)) {
					for (int j = temp; j < i; j++) {
						cout << sentence[j];
						temp++;
					}
					cout << ' ';
				}
			}
			else {
				for (int j = temp; j < i; j++) {
					cout << sentence[j];
					temp++;
				}
				cout << ' ';
			}
			temp++;
		}
	}

	if (space == spspace) {
		int x = 0;
		if (space != 0) {
			int y = 0;
			for (int t = temp; t < size(sentence); t++) {
				word[x] = sentence[t];
				x++;
			}
			sword = word;
			for (int q = 0; q < temp - (size(sword) - 1); q++) {
				 y = 0;
				for (int w = 0; w < size(sword); w++) {
					if (sentence[w + q] == sword[w]) y++;
				}
				if (y == size(sword)) {
					for (int j = temp; j < size(sentence); j++) {
						temp++;
					}
					break;
				}
			}
			if (y != size(sword)) {
				for (int j = temp; j < size(sentence); j++) {
					cout << sentence[j];
					temp++;
				}
			}
		}else {
			for (int j = temp; j < size(sentence); j++) {
				cout << sentence[j];
				temp++;
			}
		}
	}
			
		
	

	

}

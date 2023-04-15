#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;


int main() {
	string sentence, word;
	int appear = 0;

	do {
		getline(cin, word);
	} while (size(word) > 128);

	do {
		getline(cin, sentence);
	} while (size(sentence) > 512);
	
	for (int i = 0; i < size(sentence)- (size(word)-1); i++) {
		int temp = 0;
		for (int j = 0; j < size(word); j++) {
			/*if (sentence[i+j] == word[j] || sentence[i + j] == (word[j] - 32) || sentence[i + j] == (word[j] + 32)) {
				temp++;*/
			if (sentence[i + j] == word[j] ) {
				temp++; 
			}
		}
		if(temp==size(word)) appear++;
	}

	if (appear != 0) {
		cout << appear;
	}
	

}

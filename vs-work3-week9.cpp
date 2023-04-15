#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;


int main() {
	char sentence[100] = { 0 }, cnumber[100] = { 0 }, tt[100] = { 0 };
	int len, z = 0, head = 1, inumber[100] = { 0 }, temp = 0, cpnumber[100] = { 0 };

	do {
		cin.getline(sentence, 100);
	} while (sentence[0] == ' ');

	len = strlen(sentence);

	for (int i = 0; i < len; i++) {
		if (sentence[i] == ' ' || sentence[i] == ',' || sentence[i] == '，') head++;
		if ((sentence[i] == ' ' || sentence[i] == ',' || sentence[i] == '，') && (sentence[i + 1] == ' ' || sentence[i + 1] == ',' || sentence[i + 1] == '，')) head--;

		int x = 1, y = 0;
		for (int t = 0; t < i; t++) {
			if (sentence[i] == sentence[t] || sentence[i] == (sentence[t] - 32) || sentence[i] == (sentence[t] + 32)) y += 1;
		}
		if (y == 0 && sentence[i] != ' ' && sentence[i] != ',' && sentence[i] != '.' && sentence[i] != '，' && sentence[i] != '。') {
			if (sentence[i] < 97) {
				sentence[i] += 32;
				cpnumber[temp] = sentence[i];
			}
			else cpnumber[temp] = sentence[i];

			for (int j = 0; j < len; j++) {
				if (sentence[i] == sentence[j] || sentence[i] == (sentence[j] - 32) || sentence[i] == (sentence[j] + 32)) inumber[temp] += 1;
			}
			temp++;
			z++;
		}
	}

	for (int i = 0; i < z; i++) {
		for (int j = 0; j < z - 1; j++) {
			if (cpnumber[j] > cpnumber[j + 1]) {
				cpnumber[j] += cpnumber[j + 1];//a=a+b
				cpnumber[j + 1] = cpnumber[j] - cpnumber[j + 1];//b=a-b
				cpnumber[j] -= cpnumber[j + 1];//a=a-b

				inumber[j] += inumber[j + 1];
				inumber[j + 1] = inumber[j] - inumber[j + 1];
				inumber[j] -= inumber[j + 1];
			}
		}
	}


	cout << head << endl;
	for (int i = 0; i < z; i++) {
		cnumber[i] = cpnumber[i];
	}


	for (int i = 0; i < z; i++) {
		cout << cnumber[i] << " : " << inumber[i] << endl;
	}

}

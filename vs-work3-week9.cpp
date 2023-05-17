#pragma warning(disable : 4996)
#include <iostream>  
#include <stdio.h>  
#include <cstring>  

using namespace std;


int main() {
	char sentence[1000],*cpsentence = new char[1000], * store = new char;
	string compare[1000];//比較
	int i =0, j = 0;
	cout << "請輸入文字:";
	cin.get(sentence, 1000);

	//將字串內的文字都轉為小寫
	while (sentence[i] != NULL) {
		if (sentence[i] >= 65 && sentence[i] <= 90) {
			sentence[i] += 32;
		}else if (sentence[i] == ' ') j++;
		i++;
	}
	
	strcpy(cpsentence, sentence);

	char* temp = strtok_s(cpsentence, " ", &store);
	//cout << temp;

	for (int i = 0; i <= j; i++) {
		compare[i] = temp;
		int frequency = 0;

		for (int q = 0; q <= i; q++) {
			if (temp == compare[q] ) {
				frequency++;
			}
		}
		if (frequency == 1) {
			cout << temp;
		}

		temp = strtok_s(NULL, " ", &store);
	}
	

}


//char* temp = strtok_s(cpsentence, " ", &store);
//cout << temp;
//for (int i = 0; i <= j; i++) {
//	compare[i] = temp;
//	int frequency = 0;
//
//	for (int q = 0; q <= i; q++) {
//		if (temp == compare[q]) {
//			frequency++;
//		}
//	}
//	if (frequency == 0) {
//		cout << temp;
//	}
//
//	temp = strtok_s(NULL, " ", &store);
//}
//
//
//}

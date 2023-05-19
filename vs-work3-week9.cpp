#include <string>
#include <stdio.h>
#include <iostream>
using namespace std;


int main(){
	int n=0, temp[60]={0},sd[30][2]={0};
	cout << "輸入n:";
	do {
		cin >> n;
	} while (n < 1 || n > 30);
	cout << "輸入sd :";
	for (int i = 0; i < n * 2; i++) {
		do {
			cin >> temp[i];
		} while (temp[i] < 1 || temp[i]>24);
	}


	int j = 0;
	for (int i = 0; i < n * 2; i++) {
		
		if (i!= 0) {
			if (i % 2 != 0) {
				sd[j][1] = temp[i];
				j++;
			}else {
				sd[j][0] = temp[i];
			}
		}else {
			sd[0][0] = temp[i] ;
		}
	}

	


   
}


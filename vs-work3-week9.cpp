#include <string>
#include <stdio.h>
#include <iostream>
using namespace std;
#include "task.h"

int main(){
	int n, sd[60];
	cout << "輸入n:";
	do {
		cin >> n;
	} while (n < 1 || n > 30);

	cout << "輸入sd :";

	for (int i = 0; i < n * 2; i++) {
		do {
			cin >> sd[i];
		} while (sd[i] < 1 || sd[i]>24);
	}
	

	task car(n, sd);

   
}


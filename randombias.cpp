#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string>
using namespace std;
const int LIMIT = 50;
const int SIZE = 10000;
int main () {
	int numbers[SIZE], occurrence[LIMIT];
	double percents[LIMIT], totalp;
	srand(time(NULL));
	for (int i = 0; i < SIZE; i++) {
		int x = (rand() % LIMIT) + 1;
		numbers[i] = x;
	}
	for (int i = 0; i < SIZE; i++) {
		occurrence[numbers[i]]++;
	}
	for (int i = 1; i < LIMIT+1; i++) {
		percents[i] = (double)occurrence[i]*100/SIZE;
		totalp+=percents[i];
	}
	for (int i = 1; i < LIMIT+1; i++) {
		cout << i << " - " <<  occurrence[i] << " - " << percents[i] << "%" << endl;
	}
	cout << "average percent: " << totalp/LIMIT << endl;
	cout << "1/" << LIMIT << " = " << (double)1/LIMIT*100 << "%" << endl;
	return 0;
}

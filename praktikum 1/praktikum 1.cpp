// praktikum 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int arr[20];
int n;

void input() {
	while (true) {
		cout << "masukan banyaknya elemen pada array : ";
		cin >> n;
		if (n <= 20)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 20 elemen. \n";

		}
	}
	cout << endl;
	cout << "===============" << endl;
	cout << "masukkan Elemen Array" << endl;
	cout << "===============" << endl;

	for (int i = 0; i < n; i++) {
		cout << "data ke-" << (i + 1) << ": ";
		cin >> arr[i];

	}

}

void bublesortArray() { //procedur untuk mengurutkan array dengan metode bubble sort

	int pass = 1; // step 1

	do {
		for (int j = 0; j <= n - 1 - pass; j++) { // step 2
			if (arr[j + 1]) { //step 3
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;


			}
		}
		pass = pass + 1; //step 4

	} while (pass < n - 1); //step 5
}


	void display() {
		cout << endl;
		cout << "===================================" << endl;
		cout << "Element Array yang telah tersusun" << endl;
		cout << "===================================" << endl;
		for (int j = 0; j < n; j++) {
			cout << arr[j] << endl; // output setiap element Array pada
		}
	}



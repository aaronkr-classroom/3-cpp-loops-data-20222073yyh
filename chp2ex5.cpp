#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::string;

int main() {
	cout << "What size triangle? ";
	int size;
	cin >> size;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int j = 0; j < (2 * size) - 1 - (i * 2); j++) {
			cout << "*";
		}
		cout << endl;
	}

	cout << "정사각형\n";
	int len = 4;
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len; j++) {
			cout << "*";
			
		}
		cout << endl;
	}
	cout << endl;
	cout << "직사각형" << endl;
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len; j++) {
			cout << "*";
			
		}
		cout << endl;
	}
	return 0;
}

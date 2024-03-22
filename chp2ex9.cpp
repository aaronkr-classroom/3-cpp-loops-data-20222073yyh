#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;

int main() {
	int num1, num2;
	cout << "첫 번째 숫자를 입력하세요: ";
	cin >> num1;
	cout << "두 번째 숫자를 입력하세요: ";
	cin >> num2;

	if (num1 > num2) {
		cout << num1 << "가" << num2 << "보다 더크다.";
	}
	else if (num2 > num1) {
		cout << num2 << "가" << num1 << "보다 더 크다.";
	}
	else
		cout << num1 << "과" << num2 << "은 같다.";
	return 0;
}
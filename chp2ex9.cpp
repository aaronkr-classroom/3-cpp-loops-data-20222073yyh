#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;

int main() {
	int num1, num2;
	cout << "ù ��° ���ڸ� �Է��ϼ���: ";
	cin >> num1;
	cout << "�� ��° ���ڸ� �Է��ϼ���: ";
	cin >> num2;

	if (num1 > num2) {
		cout << num1 << "��" << num2 << "���� ��ũ��.";
	}
	else if (num2 > num1) {
		cout << num2 << "��" << num1 << "���� �� ũ��.";
	}
	else
		cout << num1 << "��" << num2 << "�� ����.";
	return 0;
}
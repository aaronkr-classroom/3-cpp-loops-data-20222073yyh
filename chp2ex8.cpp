#include <iostream>


using std::cout;
using std::endl;

int main() {
	int x = 1;
	for (int i = 1; i < 10; i++) {
		x *= i;
		
	}
	cout << x << endl;
	return 0;
}
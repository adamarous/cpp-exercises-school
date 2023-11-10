#include <iostream>

using namespace std;

int main() {
	int num = 26;
	
	while (num <= 26 && num >= 10) {
		if (num % 2 == 0) {
			cout << num << " ";
		}
		num--;
	}
	
	return 0;
}
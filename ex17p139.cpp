#include <iostream>
#include <string>

int sum = 0;

int SumaCifras(int &num) {
    while (num%10 != 0) {
        sum += num%10;
        num /= 10;
    }
    return sum;
}

int main() {
    int number;

    std::cout << "Dime un numero: ";
    std::cin >> number;

    std::cout << "Sus cifras suman " << SumaCifras(number) << ".";

    return 0;
}
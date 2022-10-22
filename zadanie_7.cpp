//zadanie_7
#include <iostream>
#include <cmath>

int main() {
	float a = 0;
	float kvadrat = 0;
	float cube = 0;
	std::cin >> a;
	kvadrat = pow(a,2);
	cube = pow(a,3);
	std::cout << kvadrat << " " << cube;
}
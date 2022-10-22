//zadanie_8e
#include <iostream>
#include <cmath>

int main() {
	float x = 3.6;
	float P = 0;
	P = exp(x-2)+ abs(sin(x)) - (pow(x,4) * cos(1/x));
	std::cout << P;
}
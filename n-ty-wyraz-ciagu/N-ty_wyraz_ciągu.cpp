#include <iostream>

float recursive(int n) {
	if (n == 1) {
		return 1;
	}

	if (n == 2) {
		return 0.5;
	}

	return -recursive(n - 1) * recursive(n - 2);
}

int main() {
	int n;

	std::cout << "Podaj nr wyrazu ciagu, ktorego wartosc chcesz policzyc: ";
	std::cin >> n;

	std::cout << n << " wyraz ciagu ma wartosc " << recursive(n);
}
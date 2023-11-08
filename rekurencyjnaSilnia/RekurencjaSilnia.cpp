#include <iostream>
using namespace std;

long long silnia(int n)
{
	if (n < 1) return 1;
	return n * silnia(n - 1);
}


int main()
{
	int a;
	cout << "Podaj silnie ";
	cin >> a;

	cout << "Silnia z liczby " << a << " wynosi " << silnia(a);
}
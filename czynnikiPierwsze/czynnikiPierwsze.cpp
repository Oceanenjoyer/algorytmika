#include <iostream>
using namespace std;

int main()
{
	int n;
	int k;

	cout << "Podaj liczbe: ";
	cin >> n;

	cout << "Czynniki pierwsze liczby " << n << ": ";

	k = 2;
	while (n > 1)
	{
		while (n % k == 0)
		{
			cout << k << " ";
			n /= k;
		}
		k += 1;
	}
}
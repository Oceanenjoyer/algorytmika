using namespace std;
#include <iostream>

int toPower(int a, int n) {
    int w = 1;
    while (n > 0)
    {
        if (n % 2 == 1) w *= a;
        a *= a;
        n /= 2;
    }
    return w;
}

int main()
{
    int a;
    int n;
    cout << "Podaj podstawe: ";
    cin >> a;

    cout << "Podaj wykladnik: ";
    cin >> n;

    int val = toPower(a, n);
    cout << a << " do potegi " << n << " wynosi: " << val;
}
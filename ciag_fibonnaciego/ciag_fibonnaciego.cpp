#include <iostream>
using namespace std;

long long recur_fib(int n){
    if (n < 3) {
        return 1;
    }
    return recur_fib(n - 2) + recur_fib(n - 1);
}

void incre_fib(int n) {
    int f0 = 0, f1 = 1, f;
    for (int i = 0; i <= n; i++) {
        if (i > 1) {
            f = f0 + f1;
            f0 = f1;
            f1 = f;
        }
        else {
            f = i;
        }
        cout << f << endl;
    }
}

int main()
{
    int a;
    cout << "-=- Fibonnaci iteracyjnie -=-" << endl;
    cout << "Ile wyrazów ciagu wypisac: ";
    cin >> a;
    incre_fib(a);

    int b;
    cout << "-=- Fibonnaci rekurencyjnie -=-" << endl;
    cout << "Podaj nr wyrazu ciagu: ";
    cin >> b;
    cout << recur_fib(b);
}
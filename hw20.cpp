#include<iostream>
using namespace std;

#include <iostream>
using namespace std;

int getNthFibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 0;
    if (n == 2) return 1;

    int a = 0, b = 1;
    int nextnum = 0;

    for (int i = 1; i <= n - 2; i++) {
        nextnum = a + b;
        a = b;
        b = nextnum;
    }

    return nextnum;
}

int main() {
    int n;
    cin >> n;

    int result = getNthFibonacci(n);
    cout << result << endl;

    return 0;
}
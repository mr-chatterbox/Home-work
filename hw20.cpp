#include <iostream>
using namespace std;

int getNthFibonacci(int n) {
    int a = 0;
    int b = 1;
    int nextnum = 0;

    for (int i = 1; i <= n - 2; i++) {
        nextnum = a + b;
        a = b;
        b = nextnum;
    }

    return nextnum;
}

int main() {
    int n = 10;
    cout << getNthFibonacci(n) << endl;
    return 0;
}
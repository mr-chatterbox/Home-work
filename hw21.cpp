#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};
    int sum = 0;

    for (int num : numbers) {
        sum += num;
    }

    cout << "Sum: " << sum << endl;

    return 0;
}
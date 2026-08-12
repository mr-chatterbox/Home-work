#include<iostream>
using namespace std;

int CountSetBits(int num){
    int count = 0;

    while (num > 0){

        if (num & 1){
            count++;
        }
        num = num >> 1;
    }
    return count;
}
int getTotalSetBits(int a, int b){

    int bitsInA = CountSetBits(a);
    int bitsInB = CountSetBits(b);

    return bitsInA + bitsInB; 
}
int main(){
    int a, b;
    cin >> a >> b;

    int total = getTotalSetBits(a, b);
    cout << "Total set bits in " << a << " and " << b << " is : " << total << endl;

return 0;
}
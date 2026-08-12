#include<iostream>
using namespace std;

int getNthTerm(int n){
    return (3 * n) + 7;
}
int main(){
    int n = 3;
    cout << getNthTerm(n) << endl;

return 0;
}
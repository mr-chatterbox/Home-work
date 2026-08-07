#include <iostream>
using namespace std;

int main (){

    for (int i =0;i<5;i++){
        for (int j=1;j<=5;j++){
            // without these 2 lines below will become the previous question
            if (i+j == 10){
                break;
            }
            cout << i << " " << j <<endl;
        }
    }
}
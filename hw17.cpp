#include<iostream>
using namespace std;

int main(){

    int amount = 1330;
    int notes = 0;
    int choice = 1;

    switch(choice){

        case 1: notes = amount/100;
                cout << "100R notes : " << notes << endl;
                amount = amount % 100;
        
        case 2: notes = amount/50;
                cout << "50R notes : " << notes << endl;
                amount = amount % 50;

        case 3: notes = amount/20;
                cout << "20R notes : " << notes << endl;
                amount = amount % 20;

        case 4: notes = amount/1;
                cout << "1R notes : " << notes << endl;
                amount = amount % 1;
            }
return 0;
}
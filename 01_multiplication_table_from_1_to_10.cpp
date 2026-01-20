#include <iostream>
#include <string>
using namespace std;

void printNumbers1To10Row() {
    cout << "\t\t";
    for (int i = 1; i <= 10; i++) {
        cout << i << "\t";
    }
    cout << "\n";

    for (int i = 0; i < 100; i++) {
        cout << "_";
    }
    cout << "\n";
}

void calcResult() {
    for (int i = 1; i <= 10; i++) {

        cout << i << "\t|\t";

        for (int j = 1; j <= 10; j++) {
            cout << i * j << "\t";
        }

        cout << "\n";
    }
}

void printNumbers1To10Column() {
    calcResult();
}

int main() {
    cout << "multiplication table from 1 to 10\n\n";

    printNumbers1To10Row();
    printNumbers1To10Column();

    return 0;
}

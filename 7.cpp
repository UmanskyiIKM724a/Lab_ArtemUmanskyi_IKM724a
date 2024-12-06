#include <iostream>
using namespace std;

int main() {
    int a;

    cout << "Enter the number: ";
    cin >> a;

    if (a <= 1) {
        cout << "The number is NOT PRIME" << endl;
    } else {
        int i;
        for (i = 2; i * i <= a; i++) {
            if (a % i == 0) {
                cout << "The number is NOT PRIME" << endl;
                return 0;
            }
        }
        cout << "The number is PRIME" << endl;
    }
}
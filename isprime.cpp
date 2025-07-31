#include<iostream>
using namespace std;

int main() {
    int a;
    bool isPrime = true;

    cout << "Enter the number to check: ";
    cin >> a;

    if (a <= 1) {
        cout << "Not prime" << endl;
        return 0;
    }

    for (int i = 2; i <= a / 2; i++) {
        if (a % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout << "Prime" << endl;
    else
        cout << "Not prime" << endl;

    return 0;
}


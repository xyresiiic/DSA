#include <iostream>
using namespace std;

int printnum(int n) {
    if (n == 0) 
    {
        return 0;
    }
    cout << n << " ";
    return n + printnum(n - 1);
}

int main() {
    int n = 50;
    cout << "Numbers: ";
    int sum = printnum(n);
    cout << "\nSum: " << sum << endl;
    return 0;
}

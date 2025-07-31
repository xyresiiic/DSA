#include<iostream>
using namespace std;

int factorial(int n) 
{
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}


int main()
{
    int num, sum = 0, temp, digit;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    while(temp > 0) {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    if(sum == num) {
        cout << num << " is a Strong Number." << endl;
    } else {
        cout << num << " is NOT a Strong Number." << endl;
    }

    return 0;
}


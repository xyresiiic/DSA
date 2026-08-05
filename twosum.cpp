#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Function to find two indices whose elements sum to target
bool findTwoSum(const vector<int>& arr, int target, int& index1, int& index2) {
    unordered_map<int, int> numMap; // stores element value -> index

    for (int i = 0; i < arr.size(); i++) {
        int complement = target - arr[i];
        if (numMap.find(complement) != numMap.end()) {
            index1 = numMap[complement];
            index2 = i;
            return true;
        }
        numMap[arr[i]] = i;
    }
    return false;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    if (n < 2) {
        cout << "Array size must be at least 2." << endl;
        return 0;
    }

    vector<int> arr(n);
    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter target sum: ";
    cin >> target;

    int index1, index2;
    if (findTwoSum(arr, target, index1, index2)) {
        cout << "\nPair found at indices " << index1 << " and " << index2 << endl;
        cout << "Elements: " << arr[index1] << " + " << arr[index2] << " = " << target << endl;
    } else {
        cout << "\nNo pair found with sum equal to " << target << endl;
    }

    return 0;
}

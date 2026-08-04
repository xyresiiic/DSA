#include<iostream>
using namespace std;

class solution
{
    public:
    bool isPalindrome(string s)
    {
            int left = 0;
            int right = s.length() - 1;

            while (left < right) 
            {
                if (s[left] != s[right]) 
                {
                    return false;
                }
                left++;
                right--;
            }
            return true;
        }

};

int main()
{
    solution sol;
    string s = "racecar";
    if (sol.isPalindrome(s)) {
        cout << "Yes" << endl;
    } 
    else 
    {
        cout << "No" << endl;
    }
    return 0;
}
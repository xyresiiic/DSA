#include <iostream>
using namespace std;

void printEven(int n)
{
  if (n < 2) 
  {
    return;
  }
  
  else if (n % 2 != 0) 
  {
    printEven(n - 1);
  } 
  else 
  {
    printEven(n - 2);
    cout << n << " ";
  }
}

int main() 
{
  int n = 10;
  cout << "Even numbers: " ;
  printEven(n);
  cout << endl;
  return 0;
}

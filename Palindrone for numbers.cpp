#include <iostream>
using namespace std;


int main() 
{
    int num, reversednumber = 0, originalnumber, digit;
  cout << "Enter a number: ";
    cin >> num;
originalnumber = num; 
    while (num > 0) {
        digit = num % 10; 
        reversednumber = reversednumber* 10 + digit; 
        num /= 10; 
    }
    if (originalnumber == reversednumber)
	 {
        cout << originalnumber << " is a palindrome." << endl;
    } else {
        cout << originalnumber << " is not a palindrome." << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int lcm(int a, int b) {
    int gcdValue = gcd(a, b);
    return (a * b) / gcdValue;
}

int main() {
    int num1, num2;
   cout << "Enter two numbers: ";
   cin >> num1 >> num2;

  cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm(num1, num2) <<endl;

    return 0;
}

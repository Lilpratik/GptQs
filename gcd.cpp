// greatest common diviosr of two integers using euclidean algorithm
// What is GCD?
// The Greatest Common Divisor (GCD) of two integers is the largest number that divides both numbers without leaving a remainder.

// For example:

// GCD of 12 and 8 is 4 (since 4 is the largest number dividing both).
// GCD of 13 and 7 is 1 (since 13 and 7 are prime relative to each other).
// Understanding the Euclidean Algorithm
// The Euclidean algorithm is an efficient way to compute the GCD:

// Start with two numbers
// 𝑎
// a and
// 𝑏
// b.
// If
// 𝑏
// =
// 0
// b=0, then
// 𝐺
// 𝐶
// 𝐷
// (
// 𝑎
// ,
// 𝑏
// )
// =
// 𝑎
// GCD(a,b)=a.
// Otherwise, calculate
// 𝐺
// 𝐶
// 𝐷
// (
// 𝑏
// ,
// 𝑎
// %
// 𝑏
// )
// GCD(b,a%b) recursively (or iteratively).
// The process ends when the remainder becomes 0.

#include<iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // using the Eculidean algorithm
    while (b != 0) {
        int temp = b;  // store b in a temporary varibale
        b = a % b;     // update b as the remainder of a / b
        a  = temp;     // update a as the old value of b
    }

    // When b becomes 0, a contains the GCD
    cout << "The GCD is: " << a << endl;
    return 0;
}

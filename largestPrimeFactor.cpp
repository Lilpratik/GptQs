#include<iostream>
#include<cmath>
using namespace std;

int largestPrimeFactor(int n) {
    int largest = -1;

    // first handle the smallest prime factor that is 2
    while(n % 2 == 0) {
        largest  = 2;
        n = n / 2;
    }

    // check for the odd numbers now start from 3 to sqrt(n)
    for (int i = 3;  i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            largest = i;
            n = n / i;
        }
    }

    // if n is a prime number greater than 2
    if (n > 2) {
        largest  = n;
    }
    return largest;
}


int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Largest Prime factor for " << n << " is: " << largestPrimeFactor(n) << endl;

    return 0;
}

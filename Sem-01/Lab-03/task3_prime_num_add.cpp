/*
 * Author: Syed Shaheer Ali
 * Task: 03 - Prime Number Addition
 * Purpose: Identifies prime numbers from a set of 10 user inputs and calculates their total sum using nested loops and boolean flags.
 */

#include <iostream>
#include <string>
using namespace std;
int main () {
    int num, primeSum = 0;
    string primeDisplay;

    cout << "Enter 10 positive integers to find out their sum, and which of them are prime: ";
    
    for (int i = 1; i <= 10; i++) {
        bool isPrime = true;
        
        cout << "\nEnter integer " << i << " : ";
        cin >> num;

        if (num < 2) {
            isPrime = false;
        }
        else {
            for (int j = 2; j * j <= num; j++) {
                if (num % j == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime) {
            primeSum += num;
            primeDisplay += to_string(num) + " ";
        }
    }
        
    cout << "\nThe prime numbers are: " << primeDisplay;
    cout << "\nThe sum of prime numbers is: " << primeSum;

    return 0;
}
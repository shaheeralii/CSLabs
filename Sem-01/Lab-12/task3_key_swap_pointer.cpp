/*
 * Author: Syed Shaheer Ali
 * Task: 03 - Key Exchange at a Security Checkpoint
 * Lab: 12 - Pointers
 * Purpose: Performs a secure memory-level exchange of two container key values using pointer dereferencing.
 */

#include <iostream>
#include <string>
using namespace std;

void keySwap(int* key1Ptr, int* key2Ptr) {
    int temp = *key1Ptr;
    *key1Ptr = *key2Ptr;
    *key2Ptr = temp;
}

int main () {
    int key1 = 1234;
    int key2 = 5678;
    int* Kptr1 = &key1;
    int* Kptr2 = &key2;

    cout << "Before Key Exchange: \n";
    cout << "Container 1 Key: " << key1;
    cout << "\nContainer 2 Key: " << key2;

    keySwap(Kptr1, Kptr2);

    cout << "\nAfter Key Exchange: \n";
    cout << "Container 1 Key: " << key1;
    cout << "\nContainer 2 Key: " << key2;
}
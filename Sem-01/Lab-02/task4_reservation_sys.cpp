/*
 * Author: Syed Shaheer Ali
 * Task: 04 - Ticket Reservation System
 * Purpose: Manages bus seat availability and updates remaining capacity based on user reservation requests.
 */

#include <iostream>
using namespace std;
int main () {
    int seats_res, seats_avail = 35;

    cout << "Welcome to Ticket Reservation System!\n";
    cout << "Enter the no. if seats you want to reserve (max 35): ";
    cin >> seats_res;

    if (seats_res <= 0) {
        cout << "\nInvalid number of seats!";
    }    
    else if (seats_avail >= seats_res) {
        seats_avail -= seats_res;
        cout << "\nSeats reserverd successfully! Enjoy your journey.";
        cout << "\nRemaining available seats: " << seats_avail;
    }
    else {
        cout << "\nNot enough seats available!";
        cout << "\nRemaining available seats: " << seats_avail;
    }
    
    return 0;
}
/*
 * Author: Syed Shaheer Ali
 * Task: 02 - Library Management System
 * Lab: 10 - Structures
 * Purpose: Stores book records inside a structure array with functions to add, search (by title/author), and sort books.
 */

#include <iostream>
using namespace std;

struct Book {
    string title;
    string author;
    int yearPub;
};

void addBook(Book arr[], int &count, int maxSize) {
    if (count >= maxSize) {
        cout << "\nError: Max Book Limit Reached!";
        return;
    }
    cout << "\nEnter the details of book:";
    cout << "\nTitle: ";
    cin.ignore();
    getline(cin, arr[count].title);

    cout << "\nAuthor: ";
    getline(cin, arr[count].author);

    cout << "\nPublished(Year): ";
    cin >> arr[count].yearPub;
    count++;
    cout << "\nBook Added Successfully!\n";
}

void searchByTitle(Book arr[], int count) {
    string searchTitle;
    bool found = false;

    cout << "\nEnter title to search for the book: ";
    getline(cin, searchTitle);

    for (int i = 0; i < count; i++) {
        if (arr[i].title == searchTitle) {
            found = true;
            cout << "\nBook found Successfully.";
            cout << "\nTitle: " << arr[i].title;
            cout << "\nAuthour: " << arr[i].author;
            cout << "\nPublished(Year): " << arr[i].yearPub;
            break;
        }
    }
    if (!found)
        cout << "\nBook Title not found!";
}

void searchByAuth(Book arr[], int count) {
    string searchAuth;
    bool found = false;

    cout << "\nEnter Author to search for the books: ";
    getline(cin, searchAuth);

    for (int i = 0; i < count; i++) {
        if (arr[i].author == searchAuth) {
            found = true;
            cout << "\nAuthor found Successfully.";
            cout << "\nTitle: " << arr[i].title;
            cout << "\nAuthor: " << arr[i].author;
            cout << "\nPublished(Year): " << arr[i].yearPub;
            break;
        }
    }
    if (!found)
        cout << "\nBook not found!";
}

void sortBooks(Book arr[], int count) {
    Book temp;
    for (int i = 0; i < count; i++) {
        for (int j = 0; j < count-i-1; j++) {
            if (arr[j].title > arr[j+1].title) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j] = temp;
            }
        }
    }
    cout << "\nBooks Sorted by Title Successfully!";
}

void displayAll(Book arr[], int count) {
    if (count == 0) {
        cout << "\nNo books found.";
        return;
    }
    for (int i =0; i < count; i++) {
        cout << endl;
        cout << i+1 << ". " << arr[i].title << ", "
            << arr[i].author << ", " << arr[i].yearPub;
    }
}

int main () {
    int Tcount, choice;
    const int maxSize = 50;
    Book books[maxSize];

    do {
        cout << "\n=== Library Management System ===\n";
        cout << "\nMenu:";
        cout << "\n1. Add a new book";
        cout << "\n2. Search books by title";
        cout << "\n3. Search books by author";
        cout << "\n4. Sort Books by title";
        cout << "\n5. Display all books";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addBook(books, Tcount, maxSize);
                break;
            case 2:
                searchByTitle(books, Tcount);
                break;
            case 3:
                searchByAuth(books, Tcount);
                break;
            case 4:
                sortBooks(books, Tcount);
                break;
            case 5:
                displayAll(books, Tcount);
                break;
            case 6:
                cout << "\nExiting the program...";
                break;
            default:
                cout << "\nInvalid Choice.";
        }
    } while (choice !=6);
    return 0;
}
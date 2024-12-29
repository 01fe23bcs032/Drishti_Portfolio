#include <iostream>
#include <cstdlib>
using namespace std;

const int SIZE = 100; // Size of the hash table

// Global hash table
int hash_table[SIZE];

// Function to display the menu
void menu() {
    cout << "\n--- MENU ---\n";
    cout << "1- Insert a key\n";
    cout << "2- Search a key\n";
    cout << "3- Delete a key\n";
    cout << "4- Display Hash Table\n";
    cout << "5- Exit\n";
}

// Function to insert a key into the hash table
void insert_key() {
    int roll = 0, index = 0;

    cout << "Enter the roll number: ";
    cin >> roll;

    // Simple hash function using modulo operation
    index = roll % SIZE;

    // Insert the key into the hash table
    hash_table[index] = roll;
cout << "Roll number " << roll << " inserted at index " << index << endl;
}

// Function to search for a key in the hash table
void search_key() {
    int roll = 0, index = 0;

    cout << "Enter the roll number to be searched: ";
    cin >> roll;

    // Compute the hash index
    index = roll % SIZE;

    if (hash_table[index] == -1) {
        cout << "No such data exists!\n";
    } else {
        cout << "Roll number " << hash_table[index] << " found at index " << index << endl;
    }
}

// Function to delete a key from the hash table
void delete_key() {
    int roll = 0, index = 0;

    cout << "Enter the roll number: ";
    cin >> roll;
// Compute the hash index
    index = roll % SIZE;

    if (hash_table[index] == -1) {
        cout << "No such data exists!\n";
    } else {
        // Mark the slot as deleted
        hash_table[index] = -1;
        cout << "Associated data deleted\n";
    }
}

// Function to display the hash table
void display_keys() {
    cout << "\nIndex | Roll Number\n";
    for (int index = 0; index < SIZE; index++) {
        if (hash_table[index] != -1) {
            cout << index << "      " << hash_table[index] << endl;
        }
    }
}

// Main function
int main() {
    int choice = 0;

    // Initialize the hash table with -1 (empty slots)
    for (int i = 0; i < SIZE; i++) {
        hash_table[i] = -1;
    }

// Menu loop
    while (true) {
        menu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                insert_key();
                break;
            case 2:
                search_key();
                break;
            case 3:
                delete_key();
                break;
            case 4:
                display_keys();
                break;
            case 5:
                cout << "Terminating the program\n";
                exit(0);
            default:
                cout << "Invalid option!\n";
                break;
        }
    }

    return 0;
}

#include <iostream>
using namespace std;

const int MAXN = 1000; // Maximum size of the array
int BIT[MAXN+1];       // Binary Indexed Tree array
int a[MAXN+1];         // Input array
int n;                 // Size of the array

// Function to update the BIT with delta at position x
void update(int x, int delta) {
    for( ; x <= n; x += x & -x) {
        BIT[x] += delta;
    }
}

// Function to get the prefix sum up to index x
int query(int x) {
    int sum = 0;
    for( ; x > 0; x -= x & -x) {
        sum += BIT[x];
    }
    return sum;
}

int main() {
    cout << "Enter the number of elements: ";
    cin >> n;  // Input the number of elements in the array

    // Read the array elements and update the BIT
    cout << "Enter the elements of the array:\n";
    for(int i = 1; i <= n; i++) {
    cin >> a[i];        // Input the element at index i
        update(i, a[i]);    // Update the BIT with the value at index i
    }

    // Query the sum of the first 10 elements
    cout << "The sum of the first 10 items is: " << query(10) << endl;

    return 0;
}


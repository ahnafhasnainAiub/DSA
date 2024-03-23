#include <iostream>

using namespace std;

// Function to perform linear search
int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == key) {
            return i; // Return the index if key is found
        }
    }
    return -1; // Return -1 if key is not found
}

int main() {
    const int SIZE = 15;
    int arr[SIZE];
    //Insert 15 Array values
    for(int i=0; i<SIZE; i++)
    {
        cin>>arr[i];
    }
     cout<<endl;
    // Ask user to input value to search for
    int searchValue;
    cout << "Enter a value to search for: ";
    cin >> searchValue;

    // Perform linear search
    int index = linearSearch(arr, SIZE, searchValue);

    // Check if value was found and print result
    if (index != -1) {
        cout << "Data found at index " << index << endl;
    } else {
        cout << "Data not found in the array." << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

//NOTE: UNCOMMENT THE BELOW LINE TO ENABLE WHITEBOX TEST CASE
#ifndef _CXX_TEST_MAIN_

// Function to perform bubble sort
void bubbleSort(int arr[], int size) {
    // Outer loop for the number of passes
    for (int i = 0; i < size - 1; i++) {
        // Inner loop for each pass
        for (int j = 0; j < size - i - 1; j++) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    // Sample input array
    int arr[5];
    int size = 5;

    //Getting input from the user
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Call the bubble sort function
    bubbleSort(arr, size);

    // Print the sorted array
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

//NOTE: UNCOMMENT THE BELOW LINE TO ENABLE WHITEBOX TEST CASE
#endif
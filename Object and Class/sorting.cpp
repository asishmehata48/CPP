#include <iostream>
using namespace std;

// Function template for swapping two values
template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

// Class to demonstrate sorting
class Sorter {
public:
    // Template member function for sorting an array
    template <typename T>
    void sortArray(T arr[], int size) {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    swapValues(arr[j], arr[j + 1]); // Using template function
                }
            }
        }
    }

    // Template member function to display an array
    template <typename T>
    void displayArray(T arr[], int size) {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Sorter sorter;

    // Sorting an array of integers
    int intArr[] = {5, 3, 8, 1, 2};
    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    cout << "Before sorting (int): ";
    sorter.displayArray(intArr, intSize);
    sorter.sortArray(intArr, intSize);
    cout << "After sorting (int): ";
    sorter.displayArray(intArr, intSize);

    // Sorting an array of floating-point numbers
    float floatArr[] = {4.5, 2.2, 3.3, 1.1};
    int floatSize = sizeof(floatArr) / sizeof(floatArr[0]);
    cout << "Before sorting (float): ";
    sorter.displayArray(floatArr, floatSize);
    sorter.sortArray(floatArr, floatSize);
    cout << "After sorting (float): ";
    sorter.displayArray(floatArr, floatSize);

    // Sorting an array of characters
    char charArr[] = {'z', 'b', 'a', 'm', 'e'};
    int charSize = sizeof(charArr) / sizeof(charArr[0]);
    cout << "Before sorting (char): ";
    sorter.displayArray(charArr, charSize);
    sorter.sortArray(charArr, charSize);
    cout << "After sorting (char): ";
    sorter.displayArray(charArr, charSize);

    return 0;
}

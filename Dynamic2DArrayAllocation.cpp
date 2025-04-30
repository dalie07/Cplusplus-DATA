#include <iostream>
#include <iomanip> // For formatting output
using namespace std;

int main() {
    int rows, cols;

    // Prompt the user for the dimensions of the array
    cout << "Enter the number of rows (max 3): ";
    cin >> rows;
    while (rows < 1 || rows > 3) {
        cout << "Invalid input. Please enter a value between 1 and 3 for rows: ";
        cin >> rows;
    }

    cout << "Enter the number of columns (max 3): ";
    cin >> cols;
    while (cols < 1 || cols > 3) {
        cout << "Invalid input. Please enter a value between 1 and 3 for columns: ";
        cin >> cols;
    }

    // Dynamically allocate a 2D array
    double** array = new double*[rows];
    for (int i = 0; i < rows; i++) {
        array[i] = new double[cols];
    }

    // Assign values to the array using nested loops
    cout << "Enter values for the array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter value for element [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

    // Output the values of the array
    cout << "\nThe values in the array are:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << setw(8) << array[i][j] << " ";
        }
        cout << endl;
    }

    // Free the dynamically allocated memory
    for (int i = 0; i < rows; i++) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
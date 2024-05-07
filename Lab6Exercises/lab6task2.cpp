#include <iostream>
using namespace std;

int main() {
    int rows, columns;


    cout << "Enter the number of rows (max 3): ";
    cin >> rows;
    if (rows > 3) {
        cout << "Number of rows cannot exceed 3. Exiting the program." << endl;
        return 1;
    }

    cout << "Enter the number of columns (max 3): ";
    cin >> columns;
    if (columns > 3) {
        cout << "Number of columns cannot exceed 3. Exiting the program." << endl;
        return 1;
    }

    double** arr = new double*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new double[columns];
    }

//prompting the user to enter array values of rows and columns 
    cout << "Enter values for the array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << "Enter value for element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    cout << "\nValues of the array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++) {
        //dealocating arr
        delete[] arr[i];
    }
}

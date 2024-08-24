//  * Operator for Matrix Multiplication 
#include <iostream>
using namespace std;

class Matrix {
private:
    int rows, cols;
    int** data;
public:
    // Constructor to initialize the matrix
    Matrix(int r, int c) : rows(r), cols(c) {
        data = new int*[rows];
        for(int i = 0; i < rows; i++) {
            data[i] = new int[cols];
        }
    }

    // Destructor to free allocated memory
    ~Matrix() {
        for(int i = 0; i < rows; i++) {
            delete[] data[i];
        }
        delete[] data;
    }

    // Function to input matrix elements
    void input() {
        cout << "Enter elements of " << rows << "x" << cols << " matrix:" << endl;
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                cin >> data[i][j];
            }
        }
    }

    // Overloading the binary * operator to multiply two matrices
    Matrix operator*(const Matrix& m) {
        if(cols != m.rows) {
            throw invalid_argument("Matrix dimensions do not match for multiplication.");
        }
        Matrix result(rows, m.cols);
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < m.cols; j++) {
                result.data[i][j] = 0;
                for(int k = 0; k < cols; k++) {
                    result.data[i][j] += data[i][k] * m.data[k][j];
                }
            }
        }
        return result;
    }

    // Function to display the matrix
    void display() const {
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int r1, c1, r2, c2;

    cout << "Enter dimensions of the first matrix (rows and columns): ";
    cin >> r1 >> c1;
    cout << "Enter dimensions of the second matrix (rows and columns): ";
    cin >> r2 >> c2;

    if(c1 != r2) {
        cout << "Matrix multiplication is not possible with these dimensions." << endl;
        return 1;
    }

    Matrix m1(r1, c1);
    Matrix m2(r2, c2);

    m1.input();
    m2.input();

    Matrix m3 = m1 * m2; // Calls the overloaded * operator

    cout << "Resultant matrix after multiplication:" << endl;
    m3.display();

    return 0;
}

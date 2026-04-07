#include "operation.h"
#include <iostream>
#include <limits>
#include <string>
#include <vector>
using namespace std;

// function to take matrices as input. We will call it twice, once for A and once for B.
void matrix_input(vector<vector<double>> &matrix, const string &name, int &row, int &col) {

  int rows, columns;

  // Taking input of the dimention (row x column)
  cout << "\nEnter the dimentions of your matrix " << name << "." << '\n';

  cout << "Enter number of rows in matrix " << name << " : ";
  while (!(cin >> rows) || rows <= 0) {
    cout << "Invalid input.\nPlease enter again : ";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
  }

  cout << "Enter number of columns in matrix " << name << " : ";
  while (!(cin >> columns) || columns <= 0) {
    cout << "Invalid input.\nPlease enter again : ";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
  }

  matrix.assign(rows, vector<double>(columns));
  // Taking the matrix input.
  cout << "\nEnter elements for matrix " << name << " below" << "(" << rows << " x " << columns << ")." << endl;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      cin >> matrix[i][j];
    }
  }

  row = rows;
  col = columns;
}

// Function to add 2 matrices
void matrix_addition(vector<vector<double>> A, vector<vector<double>> B, int row_A, int col_A, int row_B, int col_B) {

  bool valid = false;
  vector<vector<double>> result(row_A, vector<double>(col_A, 0.0));

  // Checking if matrices are valid for calculation.
  if ((row_A == row_B) && (col_A == col_B)) {
    valid = true;
  }

  if (!valid) {
    cout << "\nYour matrices are not valid for addition.\n";
  } else {
    // Calculating the result.
    for (int i = 0; i < row_A; i++) {
      for (int j = 0; j < col_B; j++) {
        result[i][j] = A[i][j] + B[i][j];
      }
    }
  }

  // Displaying the result if calculation was done.
  if (valid) {
    cout << "The result of A + B is : \n";
    for (int i = 0; i < row_A; i++) {
      for (int j = 0; j < col_A; j++) {
        cout << result[i][j] << " ";
      }
      cout << '\n';
    }
  }
}

// Function to do subtraction between 2 matrices
void matrix_subtraction(vector<vector<double>> A, vector<vector<double>> B, int row_A, int col_A, int row_B, int col_B) {

  bool valid = false;
  vector<vector<double>> result(row_A, vector<double>(col_A, 0.0));

  // Checking if matrices are valid for calculation.
  if ((row_A == row_B) && (col_A == col_B)) {
    valid = true;
  }

  if (!valid) {
    cout << "\nYour matrices are not valid for subtraction.\n";
  } else {
    // Calculating the result.
    for (int i = 0; i < row_A; i++) {
      for (int j = 0; j < col_B; j++) {
        result[i][j] = A[i][j] - B[i][j];
      }
    }
  }

  // Displaying the result if the calculation was done.
  if (valid) {
    cout << "The result of A - B is : \n";
    for (int i = 0; i < row_A; i++) {
      for (int j = 0; j < col_A; j++) {
        cout << result[i][j] << " ";
      }
      cout << '\n';
    }
  }
}

// Function to do multiplication between 2 matrices.
void matrix_multiplication(vector<vector<double>> A, vector<vector<double>> B, int row_A, int col_A, int row_B, int col_B) {

  bool valid = false;
  vector<vector<double>> result(row_A, vector<double>(col_B, 0.0));

  // Checking if the matrices are valid for calculation.
  if (col_A == row_B) {
    valid = true;
  }

  if (!valid) {
    cout << "Your matrices are not valid for multiplication.\n";
  } else {
    // TODO: Add calculation logic.
  }

  // Displaying the result if the calculation was done.
  if (valid) {
    cout << "The result of A * B is : \n";
    for (int i = 0; i < col_A; i++) {
      for (int j = 0; j < row_B; j++) {
        cout << result[i][j] << " ";
      }
      cout << '\n';
    }
  }
}

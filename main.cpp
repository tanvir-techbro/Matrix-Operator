#include "operation.h"
#include <iostream>
#include <limits>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {

  int option;
  int row_A, col_A;
  int row_B, col_B;
  bool valid_operation = false;
  vector<vector<double>> A; // Matrix A. First matrix.
  vector<vector<double>> B; // Matrix B. second matrix.

  /* GREETING */
  cout << "\n============================================================================\n";
  cout << "=                       WELCOME TO MATRIX OPERATOR                         =\n";
  cout << "============================================================================\n\n";

  /* main shit */
  do {
    // Choice of operation.
    cout << "Choose an option below to continue (All the operation below can only be between 2 matrices). \n";
    cout << "[0] Exit.\n";
    cout << "[1] Add. (+)\n";
    cout << "[2] Subtract. (-)\n";
    cout << "[3] Multiply. (*)\n";

    cout << "\nEnter your choice : ";
    if (cin >> option) {
      // Checking is the option is valid or not.
      if ((option >= 0) && (option <= 3)) {
        valid_operation = true;
      } else {
        cout << "\nThe option you chose is invalid.\n";
      }
    } else {
      cout << "\nThe option you chose is invalid.\n";
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // Acting on choices
    if (option == 0) {
      cout << "\n\nExiting...\n";
      break;
    } else if (option == 1) {
      matrix_input(A, "A", row_A, col_A);
      matrix_input(B, "B", row_B, col_B);
      matrix_addition(A, B, row_A, col_A, row_B, col_B);
    } else if (option == 2) {
      matrix_input(A, "A", row_A, col_A);
      matrix_input(B, "B", row_B, col_B);
      matrix_subtraction(A, B, row_A, col_A, row_B, col_B);
    } else if (option == 3) {
      matrix_input(A, "A", row_A, col_A);
      matrix_input(B, "B", row_B, col_B);
      matrix_multiplication(A, B, row_A, col_A, row_B, col_B);
    }

  } while (true);

  return 0;
}

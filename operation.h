#ifndef OPERATION
#define OPERATION

#include <string>
#include <vector>
using namespace std;

void matrix_input(vector<vector<double>> &matrix, const string &name, int &row, int &col); // name refers to the current matrix we are taking input for.
void matrix_addition(vector<vector<double>> A, vector<vector<double>> B, int row_A, int col_A, int row_B, int col_B);
void matrix_subtraction(vector<vector<double>> A, vector<vector<double>> B, int row_A, int col_A, int row_B, int col_B);
void matrix_multiplication(vector<vector<double>> A, vector<vector<double>> B, int row_A, int col_A, int row_B, int col_B);

#endif

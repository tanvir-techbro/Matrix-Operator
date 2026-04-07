# Matrix-Operator

A simple C++ command-line application for performing basic matrix operations between two matrices.

## Features

- **Matrix Addition**: Add two matrices of the same dimensions.
- **Matrix Subtraction**: Subtract one matrix from another of the same dimensions.
- **Matrix Multiplication**: Multiply two matrices (Note: Calculation logic is currently being implemented).
- **Interactive CLI**: Easy-to-use menu-driven interface for inputting matrix dimensions and elements.

## Getting Started

### Prerequisites

- A C++ compiler (e.g., `g++`, `clang++`)
- Standard Template Library (STL) support

### Compilation

You can compile the project using `g++`:

```bash
g++ -o matrix_operator main.cpp operation.cpp
```

### Running the Application

After compilation, run the executable:

```bash
./matrix_operator
```

## Usage

1. Select an operation from the menu (Add, Subtract, Multiply, or Exit).
2. Enter the dimensions (rows and columns) for Matrix A and Matrix B.
3. Input the elements for each matrix when prompted.
4. The program will validate the dimensions for the chosen operation and display the result.

## Project Structure

- `main.cpp`: Entry point of the application, handles the user interface and menu logic.
- `operation.h`: Header file containing function prototypes for matrix operations.
- `operation.cpp`: Implementation of matrix input and mathematical operations.

## Contributing

This is a small utility project. Feel free to fork it or submit pull requests for improvements, such as completing the multiplication logic or adding more advanced operations.

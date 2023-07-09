# Sudoku Solver

This project is a Sudoku solver implemented in C++. It takes a 9x9 unsolved Sudoku grid as input from an inputtxt file, with empty spaces represented as 0 or any number from 1 to 9. The solver generates the solved Sudoku grid as output in output.txt file if a solution exists. Otherwise, a message indicating that this sudoku can't be solved is displayed.

## Usage

1. Clone the repository:  
   git clone https://github.com/dhruvm149/sudoku-solver-.git
   
2. Navigate to the project directory:  
   cd sudoku-solver-

3. Provide the unsolved Sudoku grid as input in input.txt file. Ensure that you input the grid in the correct format, with 0 representing empty spaces else input numbers from 1 to 9.
   
4. Compile the C++ code:  
   g++ code.cpp -o code

5. Run the program:  
   ./code

6. View the output.txt file to see the solved sudoku if its solution exists or a message would be displayed that this sudoku can't be solved.

## Contributing

Contributions are welcome! If you have any suggestions or improvements, please submit a pull request.

## License

This project is licensed under the [MIT License](LICENSE).


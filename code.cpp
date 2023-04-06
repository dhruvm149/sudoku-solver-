#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool check(vector<vector<int>> &sudoku, int row, int column, int value)
{
    for (int i = 0; i < 9; i++)
    {
        if (sudoku[row][i] == value || sudoku[i][column] == value)
        {
            return false;
        }
    }

    int square_row_start = (row / 3) * 3;
    int square_column_start = (column / 3) * 3;

    for (int i = square_row_start; i < square_row_start + 3; i++)
    {
        for (int j = square_column_start; j < square_column_start + 3; j++)
        {
            if (sudoku[i][j] == value)
            {
                return false;
            }
        }
    }

    return true;
}

bool sudokusolver(vector<vector<int>> &sudoku, int row, int column)
{
    if (row == 9)
    {
        return true;
    }

    if (column == 9)
    {
        return sudokusolver(sudoku, row + 1, 0);
    }

    if (sudoku[row][column] != 0)
    {
        return sudokusolver(sudoku, row, column + 1);
    }

    for (int i = 1; i <= 9; i++)
    {
        bool value_check = check(sudoku, row, column, i);

        if (value_check)
        {
            sudoku[row][column] = i;
            bool solve = sudokusolver(sudoku, row, column + 1);
            if (solve)
            {
                return true;
            }
            else
            {
                sudoku[row][column] = 0;
            }
        }
    }

    return false;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<vector<int>> sudoku(9, vector<int>(9));

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> sudoku[i][j];
        }
    }

    bool solve = sudokusolver(sudoku, 0, 0);

    if (solve)
    {
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                cout << sudoku[i][j] << " ";
            }

            cout << endl;
        }
    }
    else
    {
        cout << "This sudoku can't be solved please input a solvable sudoku" << endl;
    }

    return 0;
    
}
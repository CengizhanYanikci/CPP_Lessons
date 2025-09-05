#include <iostream>

using namespace std;

int main()
{
    // This program prints Pascal's Triangle
    // Pascal's Triangle is a triangular arrangement of numbers
    // where each number is the sum of the two numbers above it.
    // Example for 5 rows:
    //         1
    //       1   1
    //     1   2   1
    //   1   3   3   1
    // 1   4   6   4   1

    int i, row, space, j, number;

    // Use a do-while loop so the user can run the program multiple times
    do
    {
        // Ask the user for the number of rows (0 to exit)
        cout << "Enter the number of rows (Exit = 0):  ";
        cin >> row;

        // Exit condition
        if (row == 0)
        {
            break;
        }

        // Outer loop: controls the number of rows
        for (i = 0; i < row; i++)
        {
            // Print spaces before numbers to keep the triangle centered
            for (space = 1; space <= row - i; space++)
            {
                cout << "  ";
            }

            // Inner loop: prints each number in row i
            for (j = 0; j <= i; j++)
            {
                if (j == 0)
                {
                    // First number in each row is always 1
                    number = 1;
                }
                else
                {
                    // Formula to calculate Pascal’s Triangle values efficiently:
                    // number = previous_number * (row_index - column_index + 1) / column_index
                    // This avoids factorials and directly uses integer math.
                    number = number * (i - j + 1) / j;
                }

                // Print the number with spacing
                cout << number << "   ";
            }

            // After finishing one row, move to the next line
            cout << "\n";
        }

        // Extra spacing after one triangle for clarity
        cout << "\n\n";

    } while (row != 0); // Continue until user enters 0

    return 0; // Program finished successfully
}

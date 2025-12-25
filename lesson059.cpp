#include <iostream>
#include <string>

using namespace std;

int main()
{
    // 4x4 grid representing the sea area where ships are placed.
    // 1 = there is a ship in that position
    // 0 = empty water
    bool ships[4][4] = {
        {0, 0, 1, 0},
        {1, 1, 0, 0},
        {0, 1, 0, 1},
        {1, 1, 0, 0}};

    // Variable to count how many ships have been hit
    int hits = 0;

    // Variable to count how many turns the player has taken
    int numberOfTurns = 0;

    // Variables to store user input (row and column)
    int row, column;

    // The game continues until the player hits all 7 ships
    while (hits < 7)
    {
        // Ask the player for a row
        cout << "Enter row: ";
        cin >> row;

        // Ask the player for a column
        cout << "Enter column: ";
        cin >> column;

        // Check if there is a ship at the entered coordinates
        if (ships[row][column])
        {
            // Set the hit ship position to 0 (remove it from the grid)
            ships[row][column] = 0;

            // Increase the number of successful hits
            hits++;

            // Inform the player about the hit and remaining ships
            cout << "Hit! Remaining ships: " << (7 - hits) << endl;
        }
        else
        {
            // Inform the player that they missed
            cout << "Miss!" << endl;
        }

        // Increase the number of turns taken
        numberOfTurns++;
    }

    // When all ships are hit, the player wins
    cout << "You won!" << endl;

    // Display the total number of turns the game took
    cout << "The game took " << numberOfTurns << " turns." << endl;

    return 0;
}

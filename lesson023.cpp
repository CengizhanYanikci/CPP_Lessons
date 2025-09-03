#include <iostream>

using namespace std;

int main()
{
    short int i;

    // 1st for loop with break
    for (i = 0; i <= 10; i++)
    {
        if (i == 6)
        {
            break;  // If i equals 6, exit the loop completely
        }
        cout << i << "  ";  // Print the current value of i
    }
    cout << endl;  // Move to a new line after the loop ends

    // 2nd for loop with continue
    for (i = 0; i <= 10; i++)
    {
        if (i == 6)
        {
            continue;  // If i equals 6, skip this iteration and continue with the next
        }
        cout << i << "  ";  // Print i (except when i is 6)
    }
    cout << endl;  // Move to a new line after the loop ends

    // while loop
    while (i < 15)
    {
        if (i == 4)
        {
            i++;        // Increment i to avoid infinite loop
            continue;   // Skip printing when i is 4
        }
        cout << i << "  ";  // Print i (except when i is 4)
        i++;                 // Increment i for the next iteration
    }

    return 0;
}

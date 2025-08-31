#include <iostream>
using namespace std;

int main()
{
    // Declare a short integer variable 'i' and initialize it to 3.
    short int i = 3;

    // Start of a do-while loop:
    // A do-while loop is similar to a while loop, but it **always executes
    // the loop body at least once**, because the condition is checked **after**
    // the loop body.
    do
    {
        // Print the current value of 'i' followed by a tab character.
        cout << i << "\t";

        // Increment 'i' by 1.
        i++;
    }     while (i < 5); //The condition is checked after executing the loop body. If i < 5, the loop will repeat. Otherwise, it stops.
            // When i becomes 5, the condition i < 5 is false,
            // so the loop stops and the program continues.
    return 0;
}

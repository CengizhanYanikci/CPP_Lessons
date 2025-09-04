#include <iostream>

using namespace std;

int main(){
    // Declare variables
    int i, step;           // 'i' is the loop counter, 'step' is how many Fibonacci numbers to print
    int first = 1, second = 1, third = 1; // first two numbers are 1, 'third' stores next number

    // Ask the user for the number of Fibonacci steps
    cout << "Enter a step number: ";
    cin >> step;

    // Print the first two numbers of Fibonacci sequence
    cout << "1 1 ";

    // Loop to calculate and print the remaining Fibonacci numbers
    // We already printed the first 2, so loop runs step-2 times
    for (i = 1; i <= step - 2; i++)
    {   
        // Shift the previous two numbers forward
        first = second;      // first becomes previous second
        second = third;      // second becomes previous third (sum)
        
        // Calculate the next Fibonacci number
        third = first + second;
        
        // Print the newly calculated Fibonacci number
        cout << third << " ";
    }

    return 0; // program ends successfully
}

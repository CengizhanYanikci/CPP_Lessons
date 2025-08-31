#include <iostream>
using namespace std;

int main(){
    // Initialize a variable 'i' with the value 1.
    // This variable will be used as a counter in the loop.
    int i = 1;

    // The 'while' loop continues as long as the condition (i <= 11) is true.
    // In other words, the loop will keep running until 'i' becomes greater than 11.
    while (i <= 11)
    {
        // Print the word "Hello" to the console.
        cout << "Hello" << endl;

        // Increase the value of 'i' by 1 each time the loop runs.
        // This is very important—without incrementing 'i', the loop would never end
        // (this situation is called an "infinite loop").
        i++;
    }
    
    // Once 'i' becomes 12, the condition (i <= 11) is false,
    // so the loop stops running and the program ends here.
    return 0;
}

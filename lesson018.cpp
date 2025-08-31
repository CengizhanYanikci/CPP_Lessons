#include <iostream>
using namespace std;

int main()
{

    int num1, num2;           // Declare two integer variables: num1 and num2
    cout << "enternumber1: "; // Ask the user to enter the first number
    cin >> num1;              // Store the user input into num1
    cout << "enternumber2: "; // Ask the user to enter the second number
    cin >> num2;              // Store the user input into num2

    while (num1 <= num2) // While loop: repeat as long as num1 is less than or equal to num2
    {
        cout << num1 << endl; // Print the current value of num1
        num1++;               // Increment num1 by 1 (num1 = num1 + 1)
    }

    return 0; 
}

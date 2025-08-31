#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int number, result;
    cout << "Enter a positive number: ";
    cin >> number;

    if (number <= 0)
    {
        cout << "Please do not enter a negative number or zero";
    }
    else
    {
        result = sqrt(number); // root
        result *= result;
        if (result == number)
        {
            cout << "square root of " << "\'" << result << "\'" << " is an integer \n";
        }
        else
        {
            cout << "This number is not an integer";
        }
    }

    return 0;
}
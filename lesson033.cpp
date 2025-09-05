#include <iostream>
using namespace std;

// ------------------- Function Declaration -------------------
// Function name: myCars
// Purpose: To display information about a car (brand, model, year, second-hand status)
// Parameters:
//   - brand (string): Car's brand (e.g., BMW, Ferrari)
//   - model (string): Car's model (e.g., i5, Astra)
//   - productYear (int): Year of production
//   - secondhand (string): Whether the car is second-hand ("Yes" or "No")
void myCars(string brand, string model, int productYear, string secondhand);


// ------------------- Main Function -------------------
int main() {

    // A separator line to make the output more readable
    cout << "******************************" << endl;

    // Call the function myCars with specific values (arguments)
    // This demonstrates how we can reuse the same function for different cars
    myCars("BMW", "i5", 2012, "Yes");
    myCars("Volvo", "S90", 1991, "No");

    // Program ends successfully
    return 0;
}


// ------------------- Function Definition -------------------
// Here we define how the function "myCars" actually works.
// It takes four parameters and prints them in a formatted way.
void myCars(string brand, string model, int productYear, string secondhand) {

    cout << "Brand (BMW, Ferrari...): " << brand << endl;
    cout << "Model (i5, Astra...): " << model << endl;
    cout << "Product year: " << productYear << endl;
    cout << "Second Hand (Yes or No): " << secondhand << endl;
    cout << "******************************" << endl; // Separator line
}

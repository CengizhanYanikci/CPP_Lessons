#include <iostream>
#include <string>

using namespace std;

int main() {
    string txt;
    cout << "Enter a string: ";
    getline(cin, txt);

    int mylenght = txt.size();          // size(): returns the number of characters in the string
    cout << txt << "\n";

    // resize(new_size, char)
    // Expands or shrinks the string to the given size.
    // If the new size is bigger, fills extra space with the given char.
    // If the new size is smaller, cuts off extra characters.

    txt.resize(mylenght + 2, '!');      // Make the string 2 characters longer and fill with '!'
    cout << txt << "\n";

    txt.resize(10);                     // Resize string to length 10 (extra characters are removed if longer)
    cout << txt << "\n";

    return 0;
}

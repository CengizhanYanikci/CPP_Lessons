#include <iostream>
#include <string>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
    string str;
    int i;
    cout << "Enter a string: ";
    getline(cin, str);

    // --- First version  ---
    // This loop replaces spaces with newlines.
    // Example: "Hello World" -> "Hello\nWorld"
    // for (i = 0; i < str.size(); i++)
    // {
    //     if (isspace(str[i]))          // isspace: checks if character is whitespace (space, tab, newline)
    //     {
    //         str[i] = '\n';            // Replace space with newline
    //     }
    //     cout << str[i];               // Print character
    // }

    // --- Second version (active code) ---
    // This loop converts every character to lowercase.
    // Example: "ABC xyz" -> "abc xyz"
    for (i = 0; i < str.size(); i++)
    {
        cout << (char)tolower(str[i]);  // tolower: converts uppercase to lowercase
    }

    return 0;
}

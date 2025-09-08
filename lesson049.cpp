#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "now step live";

    // ---------------- Forward Iterator ----------------
    // string::iterator  -> Iterates from beginning to end of the string
    // *it               -> Accesses the character at the current iterator position
    // toupper()         -> Converts a character to uppercase

    for (string::iterator it = str.begin(); it != str.end(); it++) {
        *it = toupper(*it);     // convert each character to uppercase
        cout << *it;
    }
    cout << "\n";

    // ---------------- Reverse Iterator ----------------
    // string::reverse_iterator  -> Iterates from end to beginning of the string
    // tolower()                 -> Converts a character to lowercase

    for (string::reverse_iterator it = str.rbegin(); it != str.rend(); it++) {
        *it = tolower(*it);     // convert each character to lowercase
        cout << *it;
    }

    return 0;
}

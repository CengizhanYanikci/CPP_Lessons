#include <iostream>   // For input/output operations (cout, endl)
#include <string>     // For C++ string class
using namespace std;

int main()
{
    // Declare and initialize two C++ strings
    string str1 = "The name of the planet ";       // First part of the sentence
    string str2 = "where Baby Yoda was born is ";  // Second part of the sentence

    string str3;      // Empty string to store the final result
    int mylenght;     // Variable to store the length of the string (not used in this code, but can be used if needed)

    // Append str2 to str1 and store the result in str3
    // The append() function adds the content of str2 at the end of str1
    str3 = str1.append(str2);

    // Append 4 underscore characters '_' to the end of str3
    // The second version of append() takes a count and a character
    str3 = str3.append(4, '_');  // Adds "____" at the end

    // Output the final concatenated string
    cout << str3 << endl;  

    // Extra note: You could also get the length of the string with str3.length()
    mylenght = str3.length();    
    cout << "Length of str3: " << mylenght << endl;

    return 0;  // Program executed successfully
}

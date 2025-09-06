#include <iostream>   // For input/output operations (cout, endl)
#include <cstring>    // For C-style string functions like strcpy, strcat, strlen
#include <string>     // For C++ string class
using namespace std;

int main()
{
    //---------------------------C-Language (C-style strings)-------------------------
    // char str1[16] = "Anakin";       // Declare a character array with space for 16 chars and initialize it with "Anakin"
    // char str2[16] = "Skywalker";    // Another char array initialized with "Skywalker"
    // char str3[16];                  // Empty char array to store copied string
    // int mylenght;                   // Variable to store the length of a string
    // 
    // strcpy(str3, str1);             // Copy str1 into str3
    // cout << "String Copy (str3, str1):  " << str3 << endl;
    // 
    // strcat(str1, str2);             // Concatenate str2 at the end of str1
    // cout << "String cat (str1, str2):  " << str1 << endl;
    // 
    // mylenght = strlen(str1);        // Get the length of str1 (number of characters before '\0')
    // cout << "String length (str1): " << mylenght << endl;
    //---------------------------------------------------------------------------------

    //------------------------C++-Language (std::string)-------------------------
    string str1 = "Anakin";           // Declare a C++ string and initialize it
    cout << str1 << endl;             // Print str1

    string str2 = "Skywalker";        // Another C++ string
    cout << str2 << endl;             // Print str2

    string str3;                      // Empty string to store combined result

    // Concatenate str1 and str2 with a space in between and store in str3
    str3 = str1 + " " + str2;
    cout << str3 << endl;             // Output the concatenated string

    // Note: In C++, you can get the length of a string using str3.length()
    int mylenght = str3.length();
    cout << "String length (str3): " << mylenght << endl;
    //-----------------------------------------------------------------------------

    return 0; // Program executed successfully
}

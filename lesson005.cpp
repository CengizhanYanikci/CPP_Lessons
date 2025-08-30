#include <iostream>

using namespace std;

int main()
{
    cout << "Char: " << sizeof(char) << "\n";
    cout << "int: " << sizeof(int) << "\n";
    cout << "short int: " << sizeof(short int) << "\n";
    cout << "long int: " << sizeof(long int) << "\n";
    cout << "float: " << sizeof(float) << "\n";
    cout << "Double: " << sizeof(double) << "\n";
    cout << "wchar_t: " << sizeof(wchar_t) << "\n";
    //--------------------------------------
    char x = '6';
    char xx = 68;
    cout << x << endl;
    cout << xx;
    //-----------------------------------------
    int y = 12;
    cout << &y;
    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int x = 7;
    int* ptr = &x;

    cout << x << endl;
    cout << &x << endl;
    cout << ptr << endl;
    cout << *ptr << endl;

    cout << "\n\n";

    *ptr = 777;
    cout << x << endl;
    cout << &x << endl;
    cout << ptr << endl;
    cout << *ptr << endl;

    return 0;
}
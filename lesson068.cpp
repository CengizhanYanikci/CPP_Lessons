#include <iostream>

using namespace std;

int main()
{
    double x = 3.14;
    double *y = &x;
    double **z = &y;

    cout << x << endl;
    cout << &x << endl;
    cout << y << endl;
    cout << &y << endl;
    cout << *y << endl;
    cout << "\n\n";
    **z = 4;
    cout << x << endl;
    cout << &x << endl;
    cout << y << endl;
    cout << &y << endl;
    cout << *y << endl;
    return 0;
}
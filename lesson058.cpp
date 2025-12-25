#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    float x, y,z,t, result;
    x = 10.0;
    y = 3.0;
    z = 4.0;
    t = -12;
    cout << max(x, y) << endl;
    result = exp(x);
    cout << result << endl;
    result = log10(x);
    cout << result << endl;
    result = pow(x,y);
    cout << result << endl;


    //    |\
    //  3 | \
    //    |  \ 5
    //    |   \
    //    |____\
    //       4

    result = hypot(y,z);
    cout << result << endl;
    
    result = abs(t);
    cout<<result<<endl;


    return 0;
}
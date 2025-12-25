#include <iostream>

using namespace std;

void myFunc(int myNumbers[7])
{
    for (int i = 0; i < 7; i++)
    {
        cout << myNumbers[i] << endl;
    }
}

int main()
{

    int myNums[7] = {1, 2, 3, 4, 5, 6, 7};
    myFunc(myNums);

    return 0;
}
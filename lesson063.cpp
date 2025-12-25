#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    int dice, myNumbers[7] = {0, 0, 0, 0, 0, 0, 0};
    srand(time(0));

    for (int i = 0; i <= 100000000; i++)
    {
        dice = rand() % 6 + 1;
        myNumbers[dice]++;
    }
    cout << "Dice number\tHow mant time" << endl;

    for (int j = 1; j < 7; j++)
    {
        cout << j << "  =  " << "\t\t" << myNumbers[j] << endl;
    }

    return 0;
}
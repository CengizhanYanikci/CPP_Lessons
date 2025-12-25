#include <iostream>

using namespace std;
void myArray(int *numbers, int mySize);
int main()
{
    int numbers[5] = {0, 1, 2, 3, 4};
    int arraySize = sizeof(numbers) / sizeof(numbers[0]);
    cout << "previus\n\n";

    for (int i = 0; i < arraySize; i++)
    {
        cout << "numbers[" << i << "]= " << *(numbers + i) << "\n";
    }
    myArray(numbers, arraySize);
    cout << "\nNext\n\n";

    for (int i = 0; i < arraySize; i++)
    {
        cout << "numbers[" << i << "]= " << *(numbers + i) << "\n";
    }

    return 0;
}

void myArray(int *numbers, int mySize)
{
    for (int i = 0; i < mySize; i++)
    {
        *(numbers + i) *= 4;
    }
}
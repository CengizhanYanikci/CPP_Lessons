#include <iostream>
#include <string>
using namespace std;

void sortIt();
void showArray();
void showArrayReverse();

int numbers[7], i;

int main()
{
    cout << "Enter 7 numbers: ";
    for (i = 0; i < 7; i++)
    {
        cin >> numbers[i];
    }

    cout << "Before sorting: ";
    showArray();

    cout << "\nThe array is Sorting........   Please wait!!" << endl;
    sortIt();

    cout << "\nAfter sorting: " << endl;
    showArray();

    cout << "\nReverse order: " << endl;
    showArrayReverse();

    cout << "\n";
    return 0;
}

void sortIt()
{
    int j, reserve;

    for (i = 0; i < 7; i++)
    {
        for (j = i + 1; j < 7; j++) 
        {
            if (numbers[i] > numbers[j])
            {
                reserve = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = reserve;
            }
        }
    }
}

void showArrayReverse()
{
    for (i = 6; i >= 0; i--) 
    {
        cout << numbers[i] << " ";
    }
}

void showArray()
{
    for (i = 0; i < 7; i++)
    {
        cout << numbers[i] << " ";
    }
}

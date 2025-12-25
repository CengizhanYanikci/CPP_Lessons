#include <iostream>
using namespace std;

int main()
{
    double myValue, myNumbers[5] = {0, 0, 0, 0, 0};
    int index, choice;

    do
    {
        cout << "Select an operation (-1 to exit)\n";
        cout << "\t1 - Change index\n";
        cout << "\t2 - Read index\n";
        cin >> choice;

        if (choice == -1)
        {
            break;
        }

        cout << "Write the index location (0-4): ";
        cin >> index;

        if (index < 0 || index > 4)
        {
            cout << "Index number must be between 0 and 4!\n";
            continue;
        }

        switch (choice)
        {
        case 1:
            cout << "Enter the value: ";
            cin >> myValue;
            myNumbers[index] = myValue;
            cout << "Index number " << index << " changed to value = " << myValue << endl;
            break;

        case 2:
            cout << "myNumbers[" << index << "] = " << myNumbers[index] << endl;
            break;

        default:
            cout << "Invalid choice!\n";
            break;
        }

    } while (choice != -1);

    return 0;
}

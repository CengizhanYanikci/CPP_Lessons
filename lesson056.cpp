#include <iostream>

using namespace std;

int main()
{
    string txt1;
    string base = "This is a test string";
    string txt2 = "n example";
    string txt3 = "sample phrase";
    string txt4 = "useful";
    txt1 = base;

    cout << txt1 << endl;

    txt1.replace(9, 5, txt2);
    cout << txt1 << endl;
    txt1.replace(19, 6, txt3, 7, 6);
    cout << txt1 << endl;
    txt1.replace(8,10,"just a");
    cout << txt1 << endl;
    txt1.replace(8,6,"a shorty",7);
    cout << txt1 << endl;
    txt1.replace(22,1,3,'!');
    cout << txt1 << endl;
    txt1.replace(txt1.begin(),txt1.end()-3,txt3);
    cout << txt1 << endl;


    return 0;
}
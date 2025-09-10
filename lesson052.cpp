#include <iostream>
#include <string>

using namespace std;
int main()
{
    // insert
    string txt1, txt2, txt3;

    txt1 = "Lorem ipsum dolor sit amet, ";
    txt2 = "consectetur adipiscing elit. ";
    txt3 = "elit. Aenean quis justo in purus congue vestibulum sed ac urna. Nam faucibus ";
    txt1.insert(27, txt2);
    txt1.insert(56, txt3, 5, 59);
    cout << txt1 << endl;

    return 0;
}

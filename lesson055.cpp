#include <iostream>

using namespace std;


int main(){
    string txt = "ich bin k einn Berliner";
    cout<<txt<<endl;
    txt.erase(12,1);
    cout<<txt<<endl;
    txt.erase(txt.begin()+8);
    cout<<txt<<endl;

    return 0;
}
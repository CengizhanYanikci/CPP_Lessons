#include <iostream>
#include <string>
using namespace std;

int main(){
    int myNumber1;
    int mynumber2;
    int sum;
    cout<<"Enter a number 1: ";
    cin>>myNumber1;
    cout<<"Enter a number 2: ";
    cin>>mynumber2;
    sum = myNumber1 + myNumber1;
    cout<<"You number is: "<<sum<<endl;
    //-----------------------------------------
    float r,area;
    const float pi = 3.14;
    cout<<"Enter a circle radius: ";
    cin>>r;
    area =  pi*r*r;
    cout<<"Area is: "<<area<<endl;
    //------------------------------------
    string message;
    cout<<"Enter a message: ";
    getline(cin,message);
    cout<<"\nYour message is: "<<message; 
    return 0;
}
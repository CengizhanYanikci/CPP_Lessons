#include <iostream>

using namespace std;

int main(){
    int number[5]={1,2,3,4,5};
    int* ptr=number;

    cout<<ptr<<endl;
    cout<<*ptr<<"\n\n"<<endl;

    cout<<number<<endl;
    cout<<&number<<endl;

    cout<<*number<<endl;


    return 0;
}
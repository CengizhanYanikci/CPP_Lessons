#include <iostream>

using namespace std;

int multiplication(int x, int y){

    return x*y;
}
int addition(int x, int y){

    return x + y;
}

int main(){
    int (*func)(int,int);
    func = multiplication;


    cout<<"x*y = "<<func(10,11);

    return 0 ;
}